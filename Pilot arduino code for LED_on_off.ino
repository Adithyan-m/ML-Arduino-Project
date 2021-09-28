String inp ;    

void setup() {

  Serial.begin(9600);

  pinMode(3, OUTPUT);

}
void loop() {

  if (Serial.available() > 0) {

  inp = Serial.readStringUntil('\n');

    if (inp == "on") {

      digitalWrite(3, HIGH);

      Serial.write("Led on");

    }

    else if (inp == "off") {

      digitalWrite(3, LOW);

      Serial.write("Led off");

    }

    else{

     Serial.write("invald input");

    }

  }

}
