//https://www.arduino.cc/en/Reference/SoftwareSerial
//https://www.arduino.cc/en/Tutorial/SoftwareSerialExample
#include <SoftwareSerial.h>
SoftwareSerial mySerial (9, 8); // RX, TX

void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600);
  Serial.begin(115200);
  
}

void loop() {
  char str[40];
  int i=0;
  // put your main code here, to run repeatedly:
  if (mySerial.available()){
 //   delay(100);
 //   while(mySerial.available() && i<40){
 //     str[i++] = mySerial.read();   
 //   }
 //   str[i++]='\0';
  Serial.write(mySerial.read());
  }
//  Serial.println(i);
}
