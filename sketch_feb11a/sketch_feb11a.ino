boolean timer=false;
void setup() {
  pinMode(7, INPUT);
  while(true){
    if(digitalRead(7)==HIGH){
      while(timer){
        unsigned long currentMillis=millis();
        if(currentMillis>5000){
         timer=true;
        }
      break;
      }
  }
}

}

void loop() {
scan();
fight();
win();  
}

void scan(){
  
}
void fight(){
  
}
void win(){
  
}





