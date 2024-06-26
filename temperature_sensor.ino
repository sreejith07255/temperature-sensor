int temppin=A0;
int buzzerpin=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzerpin, OUTPUT);
digitalWrite(buzzerpin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

int sensorvalue=analogRead(temppin);
  float temperature=sensorvalue*(3.0/1023.0)*10;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *c");
  
  if(temperature>15)
  {
    digitalWrite(buzzerpin, HIGH);
  }
  else
  {
    digitalWrite(buzzerpin, LOW);
  }
  delay(1000);
}
