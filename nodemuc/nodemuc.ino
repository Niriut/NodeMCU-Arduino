#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
SoftwareSerial NodeSerial(D2, D3); // RX | TX

 
void setup() {
  pinMode(D2, INPUT);
  pinMode(D3, OUTPUT);
  Serial.begin(9600);
  NodeSerial.begin(57600);
  Serial.println();
  Serial.println("NodeMCU/ESP8266 Run");
}

void loop() 
  {
       int sensor1 = NodeSerial.parseInt();
       int val1 = NodeSerial.parseInt();
    
       int sensor2 = NodeSerial.parseInt();
       int val2 = NodeSerial.parseInt();
    
       int sensor3 = NodeSerial.parseInt();
       int val3 = NodeSerial.parseInt();
    
       int sensor4 = NodeSerial.parseInt();
       int val4 = NodeSerial.parseInt();
    
    {
      Serial.print("แบตเตอรี่ตัวที่ 1");
       Serial.print(" : ");
      Serial.print("แรงดันไฟ ");
      Serial.print(": ");
      Serial.print(sensor1); 
      Serial.println(val1);
    
      Serial.print("แบตเตอรี่ตัวที่ 2");
       Serial.print(" : ");
      Serial.print("แรงดันไฟ ");
      Serial.print(": ");
      Serial.print(sensor2);
      Serial.println(val2);
       
      Serial.print("แบตเตอรี่ตัวที่ 3");
       Serial.print(" : ");
      Serial.print("แรงดันไฟ ");
      Serial.print(": ");
      Serial.print(sensor3); 
      Serial.println(val3);
           
      Serial.print("แบตเตอรี่ตัวที่ 4");
       Serial.print(" : ");
      Serial.print("แรงดันไฟ ");
      Serial.print(": ");
      Serial.print(sensor4); 
      Serial.println(val4);
      
    }
  }
