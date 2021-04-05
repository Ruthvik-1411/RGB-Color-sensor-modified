int ldrpin=A0; //select LDR pin
int red_ledpin=5; //select LED pins
int green_ledpin=6;
int blue_ledpin=7;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ldrpin,INPUT); //declaring INPUT AND OUTPUT
pinMode(red_ledpin,OUTPUT);
pinMode(green_ledpin,OUTPUT);
pinMode(blue_ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//if(Serial.available()!=0) 
{
char sval=Serial.read(); //reads value from serial monitor
int ldrstatus=0;
if(sval=='r')
{
digitalWrite(red_ledpin,HIGH);
delay(4000);
ldrstatus=analogRead(ldrpin);
digitalWrite(red_ledpin,LOW);
delay(1000);
}
if(sval=='g')
{
digitalWrite(green_ledpin,HIGH);
delay(4000);
ldrstatus=analogRead(ldrpin);
digitalWrite(green_ledpin,LOW);
delay(1000);
}
if(sval=='b')
{
digitalWrite(blue_ledpin,HIGH);
delay(4000);
ldrstatus=analogRead(ldrpin);
digitalWrite(blue_ledpin,LOW);
delay(1000);
}
if(Serial.available()==0)
{
  ldrstatus=analogRead(ldrpin);
}
Serial.println(ldrstatus);//prints LDR sensor value
delay(1000);
//detecting if red,green or blue from values obtained by checking manually
if(ldrstatus>=500&&ldrstatus<=600)
Serial.println("It is a Red led");
if(ldrstatus>=400&&ldrstatus<500)
Serial.println("It is a Green led");
if(ldrstatus>=300&&ldrstatus<400)
Serial.println("It is a Blue led");
if(ldrstatus<=150)
Serial.println("There is NO led");
}
}
