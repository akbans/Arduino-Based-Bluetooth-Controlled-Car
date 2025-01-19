// Bluetooth Controlled 4WD using Arduino Uno and HC05. COde by Akshit Bansal. Radhe Radhe :-)

char junk;
String inputString = "";

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);  //motor 1
  pinMode(4, OUTPUT);  // motor 2
  pinMode(5, OUTPUT);  //motor 3
  pinMode(6, OUTPUT);  //motor 4
}

void loop() {
  if (Serial.available()) {
    while (Serial.available()) {
      char inChar = (char)Serial.read();
      inputString += inChar;
    }
    Serial.println(inputString);
    while (Serial.available() > 0) {
      junk = Serial.read();
    }
    if (inputString == "f") {
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
    } else if (inputString == "b") {
      digitalWrite(4, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
    } else if (inputString == "r") {
      digitalWrite(4, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
    } else if (inputString == "l") {
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
    }
    inputString = "";
  }
}
// Shri Harivansh, End of Code. Hope you like it !
