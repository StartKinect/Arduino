#define SENSOR A0
#define RED 3
#define GREEN 2

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(SENSOR, INPUT);
}

void loop()
{
  if(digitalRead(SENSOR) == LOW)
  {
    digitalWrite(GREEN, LOW);
    delay(100);
    digitalWrite(RED, HIGH);
  }
  else
  {
    digitalWrite(GREEN, HIGH);
    delay(100);
    digitalWrite(RED, LOW);
  }
}
