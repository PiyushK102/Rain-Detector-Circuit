#define rain 13
#define motor 3

void setup() {
  Serial.begin(9600);
  pinMode(motor,OUTPUT);
  pinMode(rain,INPUT);
  }

void loop() {
  

 if(digitalRead(rain)==1){
  
  digitalWrite(motor,HIGH);
  Serial.println("rain detected");
 }
 else{
  digitalWrite(motor,LOW);
  Serial.println("rain not  detected");
 }
 delay(900);
}
