int LED = 10;
int LDR = A0;
int LDR_Reading = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  LDR_Reading = analogRead(LDR);
  
  Serial.print("Light Intensity = ");
  
  Serial.println(LDR_Reading);

  if(LDR_Reading < 500)
  {
    digitalWrite(LED, HIGH);

    Serial.println("LED is illuminated");
  }

  else
  {
    digitalWrite(LED, LOW);    
  }
}
