#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT Serial


Servo servo;
char auth[] = "Blynk token";
char ssid[] = "ssid";
char pswd[] = "pass";

void setup() {
 Serial.begin(9600);
 Blynk.begin(auth,ssid,pswd);
 servo.attach(15); //D4

}

void loop() {
Blynk.run();
}

BLYNK_WRITE(V1) {
  servo.write(param.asInt());
}
