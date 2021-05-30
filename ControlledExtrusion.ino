
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void extrusion(){
  digitalWrite(2, HIGH);
  delay(58.32);
  digitalWrite(2, LOW);
  //print("Extrusion\n");
  delay(3000);
}

void contraction(){
  digitalWrite(3, HIGH);
  delay(58.32);
  digitalWrite(3, LOW);
  //print("Contraction\n");
  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 4; i++){
    extrusion();
  }

  for(int i = 0; i < 4; i++){
    contraction();
  }
  
}
