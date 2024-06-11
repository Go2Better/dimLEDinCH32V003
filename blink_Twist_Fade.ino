/* for ch32v003J4M6 */
/*
 * 
 *  Blynk up and down 2 LEDs 
 *  using Pin PC2 และ PC4
 *  
 */

#define LED_S PC2
#define LED_M PIN_A2      // same pin as PC4


int time_counter; /* valable to keep second */

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_S,OUTPUT);
  digitalWrite(LED_S,0);
  pinMode(LED_M,OUTPUT);
  digitalWrite(LED_M,0);  
}

void loop() {
  // put your main code here, to run repeatedly:
 
  if (time_counter>=1) { /* 9=for 10 seconds because start with 0 */
    time_counter=0;
      for (int i = 0; i <= 1000; i++) {
          digitalWrite(LED_S,1);
          delayMicroseconds(i*i/1000);
          digitalWrite(LED_S,0);
          delayMicroseconds(1000-i);
      }
    }
   else {
    time_counter++;
      for (int i = 1000; i >= 0; i--) {
          digitalWrite(LED_M,1);
          delayMicroseconds(i*i/1000);
          digitalWrite(LED_M,0);
          delayMicroseconds(1000-i);
      }
   }
   
   delay(100);
   
}
