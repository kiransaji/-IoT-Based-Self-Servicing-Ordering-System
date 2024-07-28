int motor=13; // 
int inpin=2; // proximity sensor connected with the pin 2
int val=0; // this variable will read the value from the sensor

void setup()
{
pinMode(motor,OUTPUT);
pinMode(inpin,INPUT);
}

void loop()
{
val=digitalRead(inpin);
if(val==HIGH)
{
 digitalWrite(motor,LOW);
delay(2000);
}
else
{
digitalWrite(motor,HIGH);
delay(2000);
}
}
