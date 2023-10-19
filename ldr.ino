
int luminosidade;
int ldr = A0;
int rele = 13;

void setup()
{
  pinMode(ldr, INPUT);
  pinMode(rele, OUTPUT);
  Serial.begin(9600);
  digitalWrite(9, HIGH);
}

void loop()
{
  luminosidade = analogRead(ldr);

  if (luminosidade > 350) {
    digitalWrite(rele, LOW);
  }
  else {
    digitalWrite(rele, HIGH);
  }
  Serial.println(luminosidade);
  delay(100);
}
