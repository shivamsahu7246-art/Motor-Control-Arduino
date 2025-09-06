int ENA=3;
int IN1=4;
int IN2=5;

void setup()
{
  pinMode(ENA,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);

}

void loop()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(ENA,200);
  delay(2000);

  analogWrite(ENA,0);
  delay(1000);

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  analogWrite(ENA,200);
  delay(2000);

  analogWrite(ENA,0);
  delay(1000);
}
