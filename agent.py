# AI Agent for Smart Traffic Signal

def ai_agent(traffic_a, traffic_b):
    # Decide green time based on traffic
    if traffic_a > 500:
        green_a = 15
    else:
        green_a = 5

    if traffic_b > 500:
        green_b = 15
    else:
        green_b = 5

    return green_a, green_b

# Test the Agent
print("--- AI Agent Test ---")

# Case 1: Road A busy, Road B empty
a, b = ai_agent(800, 200)
print(f"Road A busy (800) -> Green: {a} sec")
print(f"Road B empty (200) -> Green: {b} sec")

# Case 2: Both busy
a, b = ai_agent(900, 850)
print(f"Both busy -> Road A: {a} sec, Road B: {b} sec")

# Case 3: Both empty
a, b = ai_agent(100, 150)
print(f"Both empty -> Road A: {a} sec, Road B: {b} sec")
