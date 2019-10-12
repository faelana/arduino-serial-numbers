int x=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  for(x=0;x<=10000;x++)
  {
    Serial.println(x);
  }

}
