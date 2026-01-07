int LED = 8;
int PUSH = 6;
int i=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PUSH, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button = digitalRead(PUSH);
  if(button == 0)
  {
    while(digitalRead(PUSH) == 0)
    {

    }
    i = i+1;
  }
  if(i % 2 == 1)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}