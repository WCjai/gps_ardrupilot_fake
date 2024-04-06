// Example Code to read acceleration data from pixhawk
// Check HardwareSerial connection for your Arduino board and connect them according to the connection shown in guide.md

#include <PixhawkArduinoMAVLink.h>
#include <HardwareSerial.h>

HardwareSerial &hs = Serial2;
PixhawkArduinoMAVLink mav(hs);

void setup(){
  Serial.begin(115200);
  while(!mav.begin()){
    Serial.println("Not Connected!");
    Serial.println(hs);
    delay(1000);
  }
  mav.Stream();
  delay(2000);
}

void loop(){
 mav.FakeGPS((-35.35472512), 149.15396143, 2083, 6723903);
 delay(300);
  
}