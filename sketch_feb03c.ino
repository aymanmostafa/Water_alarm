#define WATER_SENSOR 8
#define BUZZER 12
void setup(){
  pins_init();
}
void loop(){
  if(isExposedToWater())
  soundAlarm();
}
void pins_init(){
  pinMode(WATER_SENSOR, INPUT);
  pinMode(BUZZER, OUTPUT);
}
void soundAlarm(){
  for(uint8_t i=0;i<20;i++){
    digitalWrite(BUZZER, HIGH);
    delay(50);
    digitalWrite(BUZZER, LOW);
    delay(50);
  }
}
boolean isExposedToWater(){
  if(digitalRead(WATER_SENSOR)==LOW) return true;
  else return false;
}
