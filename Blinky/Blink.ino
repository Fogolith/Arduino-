//Program to control flash rate of led connected to atmega328p chip

// give pin 13 a name variable 'led'
int led = 13;

// setup runs once when you press "reset":
void setup() { 
  // init digital pin as output 
  serial.begin(9600);
  pinMode(led, OUTPUT);
}

// loop routine runs over and over again :
void loop () {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
