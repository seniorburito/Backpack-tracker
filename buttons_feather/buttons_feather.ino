const int buttonPin = 2;     // the number of the pushbutton pin
const int buttonPin1 = 3;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState1 = 0;
void setup() {
  // initialize the LED pin as an output:
  Serial.begin(115200);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);
  Serial.print("button is: ");
  Serial.print(buttonState);
  Serial.print("          button1 is: ");
  Serial.println(buttonState1);
  delay(10);
}
