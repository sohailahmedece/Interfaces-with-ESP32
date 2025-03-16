uint8_t LED_Pin = 2;       // declare LED pin on NodeMCU Dev Kit

void setup() 
{
	pinMode(LED_Pin, OUTPUT);   // Initialize the LED pin as an output
}

void loop() 
{
	digitalWrite(LED_Pin, HIGH); // Turn the LED on
	delay(1000);                // Wait for a second
	digitalWrite(LED_Pin, LOW);// Turn the LED off
	delay(1000);                // Wait for a second
}