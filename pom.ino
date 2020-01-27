int led1 = 1;
int sw =2;
void setup()
{
  pinMode(sw,INPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  if(sw == 0)
  {
    digitalWrite(led,1)
  }
  else 
  {
    digitalWrite(led,0);
  }
 }
