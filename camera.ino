
int trigger =0;
void setup() {
  // put your setup code here, to run once:
pinMode (trigger,OUTPUT);
digitalWrite(trigger,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly for timelapse. Turn switch on/off to capture photo instead of timelapse
digitalWrite(trigger,LOW);
delay(50);
digitalWrite(trigger,HIGH);
delay(5000);

}

//void loop() {
//  // put your main code here, to run continiously collection video footage 
//digitalWrite(trigger,HIGH);
//
//
//}
