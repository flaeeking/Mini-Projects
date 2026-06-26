#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int load1 = 23;
int load2 = 5;
int load3 = 18;

int potpin = 4;
int demandraw;
int demand;

int supply = 60;  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(load1, OUTPUT);
  pinMode(load2, OUTPUT);
  pinMode(load3, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
  Wire.begin(22, 19);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while (true);
  }

  display.clearDisplay();
}

void loop() {
  demandraw = analogRead(potpin);
  demand = map(demandraw, 0, 4095, 0, 100);
  Serial.print("Demand: ");
  Serial.print(demand);
  Serial.println("%");
  if (demand <= supply) {
    digitalWrite(load1, HIGH);
    digitalWrite(load2, HIGH);
    digitalWrite(load3, HIGH);
  } else if (demand > supply && demand <= supply + 20) {
    digitalWrite(load1, HIGH);
    digitalWrite(load2, HIGH);
    digitalWrite(load3, LOW);
  } else if (demand > supply + 20 && demand < supply + 40) {
    digitalWrite(load1, HIGH);
    digitalWrite(load2, LOW);
    digitalWrite(load3, LOW);
  } else {
    digitalWrite(load1, LOW);
    digitalWrite(load2, LOW);
    digitalWrite(load3, LOW);
  }
 display.clearDisplay();

 display.setTextSize(2);
 display.setTextColor(SSD1306_WHITE);

 display.setCursor(0, 0);
 display.print("Supply: ");
 display.print(supply);
 display.println("%");

 display.print("Demand: ");
 display.print(demand);
 display.println("%");

 display.println("");

 display.print("L1: ");
 display.println(digitalRead(load1) ? "ON" : "OFF");

 display.print("L2: ");
 display.println(digitalRead(load2) ? "ON" : "OFF");

 display.print("L3: ");
 display.println(digitalRead(load3) ? "ON" : "OFF");

 display.display();
}
