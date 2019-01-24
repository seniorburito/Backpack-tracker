float measuredvbat;
#define VBATPIN A9
void setup() {
    // put your setup code here, to run once:
  pinMode(13, OUTPUT);//Red
  pinMode(10, OUTPUT);//Green
  pinMode(11, OUTPUT);//Blue
  Serial.begin (9600);
  measuredvbat = analogRead(VBATPIN);
  measuredvbat *= 2;    // we divided by 2, so multiply back
  measuredvbat *= 3.3;  // Multiply by 3.3V, our reference voltage
  measuredvbat /= 1024; // convert to voltage
  Serial.print("VBat: " ); Serial.println(measuredvbat);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Counter=0;
  while (true){
    Counter++;
    if (Counter % 50 == 0){
      if (measuredvbat > 3.7){
        Serial.println("Max");
        analogWrite(13, 0);
        analogWrite(10, 100);
        analogWrite(11, 0);
      }
      else if (measuredvbat <= 3.7 && measuredvbat >= 3.3){
        Serial.println("Medium");
        analogWrite(13, 100);
        analogWrite(10, 100);
        analogWrite(11, 0);
      }
      else if (measuredvbat <3.3){
        Serial.println("Empty");
        analogWrite(13, 100);
        analogWrite(10, 0);
        analogWrite(11, 0);
      }
    }
    delay(10);
  }
}
