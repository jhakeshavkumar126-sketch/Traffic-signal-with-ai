# AI Smart Traffic Signal with AI Agent

AI Smart Traffic Signal that senses traffic and changes green light timing using AI Agent logic.

Instead of fixed timer, this system counts vehicles and gives more green time to busy road.

## Live Demo - Wokwi Simulation
https://wokwi.com/projects/480280029464829953

## How it Works
1. Sensor senses traffic on each road
2. AI Agent decides which road needs more green time
3. If Road A is busy -> Green time increases to 15 sec
4. If Road A is empty -> Green time decreases to 5 sec
5. Other road gets remaining time

## Files
- traffic.ino - Arduino Code for Traffic Signal (Wokwi)
- agent.py - AI Agent Logic in Python

## Made With
- Arduino / ESP32
- Wokwi Simulator
- Python
- GitHub

## Created By
Keshav Kumar Jha
