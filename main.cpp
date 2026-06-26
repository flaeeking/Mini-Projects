#include <Arduino.h>

const int Forward_pin = 13;
const int Backward_pin = 8;
const int Forward_pin2 = 7;
const int Backward_pin2 = 12;

const int Sensor_pin = A0;
const int threshold = 150;
int sensor;

void setup() {
  Serial.begin(9600);
  pinMode(Forward_pin, OUTPUT);
  pinMode(Backward_pin, OUTPUT);
  pinMode(Forward_pin2, OUTPUT);
  pinMode(Backward_pin2, OUTPUT);
}

void loop() {
    sensor = analogRead(Sensor_pin);
    Serial.println(sensor);
    if (sensor > threshold){
    digitalWrite(Forward_pin2, HIGH);
    digitalWrite(Backward_pin2, LOW);
    digitalWrite(Forward_pin, HIGH);
    digitalWrite(Backward_pin, LOW);
    delay(10000);
    
    digitalWrite(Forward_pin2, LOW);
    digitalWrite(Backward_pin2, LOW);
    digitalWrite(Forward_pin, LOW);
    digitalWrite(Backward_pin, LOW);  
    delay(1000);
    
    digitalWrite(Forward_pin2, LOW);
    digitalWrite(Backward_pin2, HIGH);
    digitalWrite(Forward_pin, LOW);
    digitalWrite(Backward_pin, HIGH); 
    delay(1000);

    digitalWrite(Forward_pin2, LOW);
    digitalWrite(Backward_pin2, LOW);
    digitalWrite(Forward_pin, LOW); 
    digitalWrite(Backward_pin, LOW);  
    delay(1000);
  } else {
    digitalWrite(Forward_pin2, LOW);
    digitalWrite(Backward_pin2, LOW);
    digitalWrite(Forward_pin, LOW);
    digitalWrite(Backward_pin, LOW);
  }
}

