

const int buttonPin = 2;
const int buttonPin1 = 3;
const int powerPin = 5;
const int speakerPin = 10;
const int potentiometerPin = A1; 


int buttonState = 0;
int buttonState1 = 0;
int wait;
int potentiometerValue = 0;
  
bool on = false;

void setup() {
  // initialize the LED pin as an output:
  Serial.begin(115200);
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(powerPin, OUTPUT);
  pinMode(speakerPin, OUTPUT);
  digitalWrite(powerPin, HIGH);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);
  potentiometerValue = analogRead(potentiometerPin);
  Serial.println(potentiometerValue);
  Serial.println("######################################");
  if(buttonState){
    on = !(on);
    Serial.println("yo");
  }
  
  /*
  Serial.print("button is: ");
  Serial.print(buttonState);
  Serial.print("          button1 is: ");
  Serial.println(buttonState1);
  */
  delay(10);
  while(on == true){
    potentiometerValue = analogRead(potentiometerPin);
    wait = map(potentiometerValue, 0, 1023, 50, 1000);
    tone(speakerPin, 392);
    delay(wait);
    buttonState = digitalRead(buttonPin);
    if(buttonState){
      on = !(on);
      noTone(speakerPin);
      break;
    }
    noTone(speakerPin);
    delay(wait);
    buttonState = digitalRead(buttonPin);
    if(buttonState){
      on = !(on);
      break;
    }
  }
  delay(50);
}
