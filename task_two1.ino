int red = 2;
int Yellow = 1;
int green = 0;
int button = 4;
int reading;
int Counter = 1;
void setup()
{
  pinMode(red ,OUTPUT);
  pinMode(Yellow ,OUTPUT);
  pinMode(green ,OUTPUT);

  pinMode(button ,INPUT);

}

void loop()
{
  reading = digitalRead(button);
  
//  while(digitalRead(button) == 1){}
if (reading == HIGH){
  if (Counter == 1)
  {
    digitalWrite(red ,HIGH);   
    delay(250);
    Counter++;

  }
   else if (Counter == 2)
  {
    digitalWrite(red ,HIGH);
         delay(250);

    digitalWrite(Yellow ,HIGH);
         delay(250);
  Counter++;

  }
  
   else if (Counter == 3)
  {
    digitalWrite(red ,HIGH);
         delay(250);

    digitalWrite(Yellow ,HIGH);
         delay(250);

    digitalWrite(green ,HIGH);
         delay(250);
  Counter++;

  }
  
  else 
  {
    digitalWrite(red ,LOW);
    digitalWrite(Yellow ,LOW);
    digitalWrite(green ,LOW);
        delay(250);
  }
}
 
  
}