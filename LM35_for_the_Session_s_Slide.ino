int LM35 = A0;
int Reading = 0;
int Temperature = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Reading = analogRead(LM35);
  
  Temperature = Reading * (5.0 * 100 / 1024) - 2.5;

  Serial.print("Temperature = ");
  
  Serial.println(Temperature);
}
