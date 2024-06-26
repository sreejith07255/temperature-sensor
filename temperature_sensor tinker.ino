int temppin=A0;
int red=13;
int blue=12;
int green=11;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);  
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

int sensorvalue=analogRead(temppin);
  float temperature=sensorvalue*(3.0/1023.0)*10;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *c");
  
  if(temperature>8)
  {
    digitalWrite(red, HIGH);
  }
  else
  {
    digitalWrite(red, LOW);
  }
  delay(500);
   if(temperature>6&temperature<8)
  {
    digitalWrite(blue, HIGH);
  }
  else
  {
    digitalWrite(blue, LOW);
  }
  delay(500);
   if(temperature<6&temperature>4)
     
  {
    digitalWrite(green, HIGH);
  }
  else
  {
    digitalWrite(green, LOW);
  }
  delay(500);
  
}