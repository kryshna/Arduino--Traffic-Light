int LED =  A0;
int l = 12;
int LED2 = A1;

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(l,OUTPUT);
  pinMode(LED2,OUTPUT);
}

  void loop(){
  digitalWrite(LED,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(l,LOW);
    delay(5000);
   
  digitalWrite(l,HIGH);
  digitalWrite(LED,LOW);
  digitalWrite(LED2,LOW);
    delay(5000); 
     
   digitalWrite(LED2,HIGH);
   digitalWrite(l,LOW);
   digitalWrite(LED,LOW);
     delay(5000);
   
  }

  
