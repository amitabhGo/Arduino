/* 
 *  LDR SENSOR
 *  
 *  30-05-21
 *  
 */
#define IN 8
#define OUT 13


// hh
void setup() {
  // put your setup code here, to run once:

  pinMode(IN, INPUT);
  pinMode(OUT, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = digitalRead(IN);

  if(value == 1){

    digitalWrite(OUT, HIGH);

    Serial.println("LIGHT IS ON");
    
  }
  else{

    digitalWrite(OUT, LOW);
    Serial.println("LIGHT IS OFF");
    
  }

  delay(200);
}
