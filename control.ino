
MIT License

Copyright (c) 2018 Ashwini kumar sinha

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.


int x=0;
int y=0;
int sen1=2;
int sen2=3;
int len=0;
int dis=0;



#define echopin  7 // echo pin
#define trigpin 6// Trigger pin
long duration, distance; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 
 pinMode (trigpin,OUTPUT);
  pinMode (echopin,INPUT );

pinMode (sen1,INPUT);
pinMode(sen2,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

    digitalWrite(trigpin,LOW);
    delayMicroseconds(2);
    
    digitalWrite(trigpin,HIGH);
    delayMicroseconds(10);
    
    duration=pulseIn (echopin,HIGH);
    
    distance= duration/58.2; 
    delay (50);
x=digitalRead(sen1);
y=digitalRead(sen2);

//uncomment the below to see the sensor value
// Serial.print("\t");
//  Serial.print("first output =  ");
//Serial.println(y);
//
// Serial.print("\t");
//  Serial.print("second output =  ");
//Serial.print(x);
//
//   Serial.print("\t");
//  Serial.print("distance cm =  ");
//Serial.print(distance);

if (x==1){
  Serial.println("left");
  
  
}
if (y==1){
  Serial.println("right");
}
if (distance<=16 )
{
  Serial.println("s");
  delay(200);
}
if (distance>=16 && distance<=25)
{
  Serial.println("f");
  delay(200);
}



}

    


