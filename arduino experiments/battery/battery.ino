void setup() {
  // put your setup code here, to run once:
#define VBATPIN A9
   
float measuredvbat = analogRead(VBATPIN);
measuredvbat *= 2;    // we divided by 2, so multiply back
measuredvbat *= 3.3;  // Multiply by 3.3V, our reference voltage
measuredvbat /= 1024; // convert to voltage
Serial.print("VBat: " ); Serial.println(measuredvbat);
}
void loop() {
  // put your main code here, to run repeatedly:
int.Counter=0;
while (True){
  Counter++;
  if (Counter % 50 == 0)
    if (measurevbat > 3.7)
      Serial.print("Max");
    else if (measurevbat <= 3.7) and (measurevbat >= 3.3)
      Serial.print("Medium")
    else if (measurevbat <3.3)
      Serial.print("Empty")
}}
