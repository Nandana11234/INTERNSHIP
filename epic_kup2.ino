// C++ code
//
int ledpin1=13;
int ledpin2=12;
int ledpin3=11;
void setup()
{
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
}

void loop()
{
  digitalWrite(ledpin1, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, HIGH);
  delay(3000);
  digitalWrite(ledpin3, LOW);
}