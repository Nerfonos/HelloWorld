//This program was completed 2022-09-16 By Nick Vella 000826457
#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("\n\nNick Vella 000826457");
  int chipID = (int)ESP.getChipId;
  Serial.println("Chip Id: "+(String)chipID);
  int flashChipID = (int)ESP.getFlashChipId;
  Serial.println("Flash Chip Id: "+(String)flashChipID);
}

void loop() {
  delay(2000);
  long time = millis();
  Serial.println(time);
}