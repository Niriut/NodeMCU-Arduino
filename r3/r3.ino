#include <SoftwareSerial.h>
SoftwareSerial UnoSerial(3, 2); // RX | TX 

int sensor1 = A0;
 int sensor2 = A1;
 int sensor3 = A2;
 int sensor4 = A3;

void setup() {
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  Serial.begin(9600);
  UnoSerial.begin(57600);
}

void loop() {
   Serial.println("แบตเตอรี่ตัวที่ 1");
     int val1 = mapf(analogRead(A0), 0, 1024, 0, 24);
  Serial.println(val1);
 UnoSerial.print(val1);
  Serial.println("แบตเตอรี่ตัวที่ 2");
    int val2 = mapf(analogRead(A1), 0, 1024, 0, 24);
  Serial.println(val2);
 UnoSerial.print(val2);
  Serial.println("แบตเตอรี่ตัวที่ 3");
    int val3 = mapf(analogRead(A3), 0, 1024, 0, 24);
  Serial.println(val3);
UnoSerial.print(val3);
  Serial.println("แบตเตอรี่ตัวที่ 4");
    int val4 = mapf(analogRead(A4), 0, 1024, 0, 24);
  Serial.println(val4);
UnoSerial.print(val4);
    delay(3000);
}
int mapf(int val, int in_min, double in_max, int out_min, int out_max) {
  return (val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
