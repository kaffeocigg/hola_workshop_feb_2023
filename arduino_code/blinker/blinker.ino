int ledPin = 7; // LED output, pin 7, which we will be using to send current to the LED. We can call it anything we want. It is just a variable name.

/*
void setup()
{
  // initialize digital pin LED_BUILTIN as an output, and not as an input (the pins can be used to read data from sensors, or to send data (currents))
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
  delay(1000);
}

*/

void setup()
{
  // initialize digital pin LED_BUILTIN as an output, and not as an input (the pins can be used to read data from sensors, or to send data (currents))
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(ledPin, HIGH); // turn the LED on (HIGH is the voltage level)
  Serial.println("1");
  delay(1000);               // wait for a second
  digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
  Serial.println("0");
  delay(1000);
}
