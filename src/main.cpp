#include <Arduino.h>
#include <ESP8266WiFi.h>
void setup()
{
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  Serial.begin(115200);
  delay(500);
  Serial.println("on");
}

void loop()
{
  digitalWrite(2, LOW);
  for(int i = 0;i < 10; i++){
  Serial.println( i);
  delay(500);
  }
  digitalWrite(2, HIGH);
  delay(500);
  
}
