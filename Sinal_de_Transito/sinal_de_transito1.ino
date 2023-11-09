// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop()
{
  /*digitalWrite(2, HIGH);
   digitalWrite(4, HIGH);
   digitalWrite(7, HIGH);
   delay(4000); // Wait for 400 millisecond(s)
   digitalWrite(2, LOW);
   digitalWrite(4, LOW);
   digitalWrite(7, LOW);
   delay(1000); // Wait for 100 millisecond(s)*/
  
  digitalWrite(2, HIGH);
  delay(4000);
  digitalWrite(2, LOW);
  delay(1000);
  
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(4, LOW);
  delay(2000);
    
  digitalWrite(7, HIGH);
  delay(4000);
  digitalWrite(7, LOW);
  delay(1000);
  
  
}