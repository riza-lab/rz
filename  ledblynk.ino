#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>



char auth[] = "RHBwc1fBRywrTQAcl2ba9kbkcqleHPet";
char ssid[] = "NA";
char pswd[] = "234567ER";
void setup() 
{
Serial.begin(9600);
Blynk.begin(auth,ssid,pswd);
}
void loop() 
{
 Blynk.run();

}
