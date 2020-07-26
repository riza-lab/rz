#include <DHT.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>
#include <ESP8266WiFi.h>

#define suhu 4
#define BLYNK_PRINT Serial

DHT sh(suhu, DHT11);
SimpleTimer timer;
char auth[] = "Blynk Token";
char ssid[] = "ssid";
char pswd[] = "pass";

void setup() {
 Serial.begin(9600);
 Blynk.begin(auth,ssid,pswd);
 sh.begin();
 timer.setInterval(1000, senddata);  

}


void senddata() {
 float temp = sh.readTemperature();
 float hum = sh.readHumidity();
 Blynk.virtualWrite(V0, temp);
 Blynk.virtualWrite(V1, hum);

   
}
void loop() {

  Blynk.run();
  timer.run();

}
