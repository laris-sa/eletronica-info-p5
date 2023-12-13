//C++ code

int vermelho = 10;
int amarelo = 9;
int verde = 8;
int botao = 12;

void setup() 
{
  pinMode(vermelho,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(botao,INPUT);
  
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);

}

void loop(){
  if (digitalRead(botao)==HIGH){
  delay(2000);
   semaforo();
  }
   
}

void semaforo(){
	digitalWrite(vermelho, LOW);
  	digitalWrite(amarelo, HIGH);
  	digitalWrite(verde, LOW);
  
  	delay(2000);
  
  	digitalWrite(amarelo, LOW);
  	digitalWrite(vermelho, HIGH);
  	digitalWrite(verde, LOW);
  	
  	delay(2000);
  
  	digitalWrite(amarelo, LOW);
  	digitalWrite(verde, HIGH);
  	digitalWrite(vermelho, LOW);
  
  	delay(2000);
 
}