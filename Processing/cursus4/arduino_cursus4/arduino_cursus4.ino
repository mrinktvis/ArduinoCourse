void setup(){
  Serial.begin(9600);
}

void loop(){
 Serial.write(map(analogRead(A0), 0, 1024, 0, 256));
 delay(10); 
}
