#include <Arduino.h>
#include <Servo.h>

Servo doorServo;

int irSensor = 2;
int button = 3;
int buzzer = 4;

unsigned long lastBeepTime = 0;
unsigned long unlockTime = 0;

bool doorOpen = false;

void setup() {
  pinMode(irSensor, INPUT_PULLUP);
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);

  doorServo.attach(9);
  doorServo.write(90); // Locked

  Serial.begin(9600);
}

void loop() {
  int irValue = digitalRead(irSensor);
  int buttonValue = digitalRead(button);

  if (irValue == LOW && millis() - lastBeepTime > 500) {
    Serial.println("Presence detected!");
    tone(buzzer, 500);
    delay(200);
    noTone(buzzer);
    lastBeepTime = millis();
  }

  if (buttonValue == HIGH) {
    Serial.println("Access granted!");
    doorServo.write(0);
    doorOpen = true;
    unlockTime = millis();
    noTone(buzzer);
  }

  if (doorOpen && millis() - unlockTime > 3000) {
    doorServo.write(90);
    doorOpen = false;
    Serial.println("Door locked again");
    noTone(buzzer);
  }
}
