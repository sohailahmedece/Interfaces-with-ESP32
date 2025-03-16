uint8_t LED_Pin = D4;       // declare LED pin on NodeMCU Dev Kit
uint8_t buttonPin= D0;      // declare Button pin on NodeMCU Dev Kit

int buttonState = 0;
bool temp = false;

void setup() 
{
  Serial.begin(9600);
	pinMode(LED_Pin, OUTPUT);   // Initialize the LED pin as an output
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(LED_Pin, LOW);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonPin);
  if(buttonState == 0)
  { 
    delay(10);
    temp =! temp;
    if(buttonState == 0)
    {
      Serial.println(buttonState);
      digitalWrite(LED_Pin, temp); // Turn the LED on and off
	    delay(1000);                // Wait for a second
    }
  }
}