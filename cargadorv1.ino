int baseq1=1;
int ledcarga=2;
int rele=3;
int contador=0;
void setup() {
  pinMode(baseq1,OUTPUT);
  pinMode(ledcarga,OUTPUT);
  pinMode(rele, OUTPUT);
  
  digitalWrite(baseq1, LOW);
  digitalWrite(rele, LOW);
  digitalWrite(ledcarga,LOW);

  Serial.begin(9600);

}

void loop() {

    delay(30000);
    contador=contador + 1;
  int    tiempo=contador*30;
    
    digitalWrite(baseq1,HIGH);

    float medicion=analogRead(A0);
    float vbat=5*medicion/1024;
    Serial.print("Tiempo: "); Serial.print(tiempo); Serial.print("      "); Serial.print("Batería: "); Serial.println(vbat);
    

if (vbat > 4.83)
{
 digitalWrite(rele, HIGH); 
 digitalWrite(ledcarga,HIGH);

 }

 else if (vbat < 4.06)
 {
  digitalWrite(rele, LOW);
  pinMode(ledcarga,LOW);
  }
  
 


  
 
 
 
digitalWrite(baseq1, LOW);

}
