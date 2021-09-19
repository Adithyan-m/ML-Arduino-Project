String inbyte ;    

void setup() {

  Serial.begin(9600);

  pinMode(3, OUTPUT);

}
void loop() {

  if (Serial.available() > 0) {

  inbyte = Serial.readStringUntil('\n');

    if (inbyte == "on") {

      digitalWrite(3, HIGH);

      Serial.write("Led on");

    }

    else if (inbyte == "off") {

      digitalWrite(3, LOW);

      Serial.write("Led off");

    }

    else{

     Serial.write("invald input");

    }

  }

}