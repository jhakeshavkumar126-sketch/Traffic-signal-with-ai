#define RED_A 13
#define YELLOW_A 12
#define GREEN_A 11
#define RED_B 10
#define YELLOW_B 9
#define GREEN_B 8
#define SENSOR_A A0
#define SENSOR_B A1

void setup() {
  pinMode(RED_A, OUTPUT);
  pinMode(YELLOW_A, OUTPUT);
  pinMode(GREEN_A, OUTPUT);
  pinMode(RED_B, OUTPUT);
  pinMode(YELLOW_B, OUTPUT);
  pinMode(GREEN_B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int trafficA = analogRead(SENSOR_A);
  int trafficB = analogRead(SENSOR_B);
  int greenTimeA;
  if (trafficA > 500) {
    greenTimeA = 15000;
  } else {
    greenTimeA = 5000;
  }
  int greenTimeB;
  if (trafficB > 500) {
    greenTimeB = 15000;
  } else {
    greenTimeB = 5000;
  }
  Serial.print("Road A Traffic: ");
  Serial.print(trafficA);
  Serial.print(" | Green Time: ");
  Serial.println(greenTimeA);
  digitalWrite(GREEN_A, HIGH);
  digitalWrite(RED_B, HIGH);
  digitalWrite(RED_A, LOW);
  digitalWrite(GREEN_B, LOW);
  delay(greenTimeA);
  digitalWrite(GREEN_A, LOW);
  digitalWrite(YELLOW_A, HIGH);
  delay(2000);
  digitalWrite(YELLOW_A, LOW);
  digitalWrite(RED_A, HIGH);
  digitalWrite(RED_B, LOW);
  digitalWrite(GREEN_B, HIGH);
  delay(greenTimeB);
  digitalWrite(GREEN_B, LOW);
  digitalWrite(YELLOW_B, HIGH);
  delay(2000);
  digitalWrite(YELLOW_B, LOW);
  digitalWrite(RED_B, HIGH);
}
