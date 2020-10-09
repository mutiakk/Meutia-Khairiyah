int motor = A0;
int h = 255;
int l = 0;
String motion;

void setup() {
  Serial.begin(9600);
  pinMode(motor, OUTPUT);
}

void loop() {
  Serial.println("Silahkan ketik 'p' untuk memutar dan 's' untuk berhenti");
  while(Serial.available()==0){ }
  motion = Serial.readString();

  if(motion == "p"){
    analogWrite(motor, l);
  }

  if(motion == "s"){
    analogWrite(motor, h);
  }
}
