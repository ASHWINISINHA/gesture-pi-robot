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
    
    distance= duration/58.2; // Distance is found using this formula 
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

    


