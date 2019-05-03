//set pin numbers
//const won't change
const int ledPin = 13;   //the number of the LED pin
const int ldrPin = A0;  //the number of the LDR pin


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  //αρχικοποίηση initialize the LED pin as an output
  pinMode(ldrPin, INPUT);   //αρχικοποίηση initialize the LDR (αισθητηρας φωτος) pin as an input
}

void loop() {

  int ldrStatus = analogRead(ldrPin);   //read the status of the LDR value   διαβάζει την ένδειξη φωτός

  //check if the LDR status is <= 300 ελέγχει αν η ένδειξη φωτός είναι μικρότερη από 300
  //if it is, the LED is HIGH  τότε ο φάρος ανάβει

   if (ldrStatus <=300) {

    digitalWrite(ledPin, HIGH);               //turn LED on  ανάβει ο φάρος
    Serial.println("LDR is DARK, LED is ON");
    delay(1000);
    digitalWrite(ledPin, LOW);   
    delay(1000);     // ο φάρος ανάβει και σβήνει κάθε 1sec
    
   }
  else {

    digitalWrite(ledPin, LOW);          //turn LED off σβήνει ο φάρος
    Serial.println("---------------");
  }
}
