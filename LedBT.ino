
const  int control = 9 ;
void setup()
{
  pinMode(control,  OUTPUT) ;
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  while(Serial.available())
  {
    char dato=Serial.read();
    digitalWrite(13,LOW);
    switch(dato)
    {
      case 'A':
      {
        digitalWrite(13,HIGH);
        Serial.println("Led encendido");
        break;
      }
      case 'B':
      {
        digitalWrite(13,LOW);
        Serial.println("Led apagado");
        break;
      }
      case 'C':
      {
        digitalWrite(control, HIGH);
        Serial.println("Motor encendido");
        break;
      }
      case 'D':
      {
        digitalWrite(control, LOW);
        Serial.println("Motor apagado");
        break;
      }
    }
  }

}
