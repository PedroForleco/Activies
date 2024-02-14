// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);//verde1
  pinMode(12, OUTPUT);//amarelo1
  pinMode(11, OUTPUT);//vermelho1
  pinMode(7, OUTPUT);//vermelho2
  pinMode(6, OUTPUT);//amarelo2
  pinMode(5, OUTPUT);//verde2
}

void loop()
{
  digitalWrite(11, HIGH);//SEMÁFORO(1)
  digitalWrite(12, LOW);//SEMÁFORO(1)
  digitalWrite(13, LOW);//SEMÁFORO(1)
  digitalWrite(7, LOW);//SEMÁFORO(2)
  digitalWrite(6, LOW);//SEMÁFORO(2)
  digitalWrite(5, HIGH);//SEMÁFORO(2)
  delay(2500);
 
  digitalWrite(11, HIGH);//SEMÁFORO(1)
  digitalWrite(12, LOW);//SEMÁFORO(1)
  digitalWrite(13, LOW);//SEMÁFORO(1)
  digitalWrite(7, LOW);//SEMÁFORO(2)
  digitalWrite(6, HIGH);//SEMÁFORO(2)
  digitalWrite(5, LOW);//SEMÁFORO(2)
  delay(2500);
 
  digitalWrite(11, LOW);//SEMÁFORO(1)
  digitalWrite(12, LOW);//SEMÁFORO(1)
  digitalWrite(13, HIGH);//SEMÁFORO(1)
  digitalWrite(7, HIGH);//SEMÁFORO(2)
  digitalWrite(6, LOW);//SEMÁFORO(2)
  digitalWrite(5, LOW);//SEMÁFORO(2)
  delay(2500);
  
  digitalWrite(11, LOW);//SEMÁFORO(1)
  digitalWrite(12, HIGH);//SEMÁFORO(1)
  digitalWrite(13, LOW);//SEMÁFORO(1
  digitalWrite(7, HIGH);//SEMÁFORO(2)
  digitalWrite(6, LOW);//SEMÁFORO(2)
  digitalWrite(5, LOW);//SEMÁFORO(2)
  delay(2500);
} 
