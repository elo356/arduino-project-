#define BLYNK_PRINT Serial

#include "WiFi.h"
#include "WiFiClient.h"
#include "BlynkSimpleEsp32.h"


const int r = 25;
const int g = 26;
const int b = 27;
int led = 4;
char auth[] = "IUA7lFYIVl3xH6OrtJs3IED7Yy2_sW_h";
char ssid[] ="ESR_5G";
char passw[] = "worker55luck";

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);

  Blynk.begin(auth, ssid, passw);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Blynk.run();
  
}

void setLedColor(int rV, int gV, int bV){
  digitalWrite(r,rV);
  digitalWrite(g,gV);
  digitalWrite(b,bV);
}
