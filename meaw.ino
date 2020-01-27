int led = 1,2;
void setup()
{
    pinMode(led,OUTPUT);
}
void loop()
{
    digitalWrite(led,1);
    delay(100);
    digitalWrite(led,0);
    delay(200);
    digitalWrite(led,1);
    digitalWrite(led,1);
    delay(1000);
}