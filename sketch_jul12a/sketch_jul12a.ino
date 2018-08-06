void setup(){
  Serial.begin(115200);
  while(!Serial){
    ;
  }
}

void loop(){
  Serial.write("Hello world!");
  delay(1000);
  
}
