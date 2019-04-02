
int led1 = D5;

int led2 = D6; 

int led3 = D7; 

int led1State = LOW;
int led2State = LOW;
int led3State = LOW;

void setup() 
{

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Spark.function("led", ledButton);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

}

void loop()
{
    
}

int ledButton(String command) 
{
 
  if (command =="red")
  {
      (led1State == LOW) ? led1State = HIGH : led1State = LOW;
      digitalWrite(led1, led1State);
      return 0;
  }
  
  if (command =="green")
  {
      (led2State == LOW) ? led2State = HIGH : led2State = LOW;
      digitalWrite(led2, led2State);
      return 0;
  }
  
  if (command =="blue")
  {
      (led3State == LOW) ? led3State = HIGH : led3State = LOW;
      digitalWrite(led3, led3State);
      return 0;
  }
  else
  {
      return -1;
  }
    
}

