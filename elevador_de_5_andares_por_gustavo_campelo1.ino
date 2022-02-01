int andarAtual = 1;
int andarDestino = 0;

int p0 = 13;
int p1 = 12;
int p2 = 11;
int p3 = 10;
int p4 = 9;

int m1 = 5;
int m2 = 4;
int b0 = 6;
int b1 = 7;
int b2 = 8;

int andar0 = 0;
int andar1 = 0;
int andar2 = 0;
int andar3 = 0;
int andar4 = 0;

void setup()
{
  pinMode(p0, INPUT);
  pinMode(p1, INPUT);
  pinMode(p2, INPUT);
  pinMode(p3, INPUT);
  pinMode(p4, INPUT);
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(b0, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
}

void loop()
{
  ver_no_display(andarAtual);
  
  andar0 = digitalRead(p0);
  andar1 = digitalRead(p1);
  andar2 = digitalRead(p2);
  andar3 = digitalRead(p3);
  andar4 = digitalRead(p4);
  
  if(andar0 == HIGH)
  	{
    	andarDestino = 1;
    	andar1 = 0;
    	andar2 = 0;
    	andar3 = 0;
    	andar4 = 0;
  	}
  
  if(andar1 == HIGH)
  	{
    	andarDestino = 2;
    	andar0 = 0;
    	andar2 = 0;
    	andar3 = 0;
    	andar4 = 0;
  	}
  
  if(andar2 == HIGH)
  	{
    	andarDestino = 3;
    	andar1 = 0;
    	andar0 = 0;
    	andar3 = 0;
    	andar4 = 0;
  	}
  
  if(andar3 == HIGH)
  	{
    	andarDestino = 4;
    	andar1 = 0;
    	andar2 = 0;
    	andar0 = 0;
    	andar4 = 0;
  	}
  
  if(andar4 == HIGH)
  	{
    	andarDestino = 5;
    	andar1 = 0;
    	andar2 = 0;
    	andar3 = 0;
    	andar0 = 0;
  	}

  while (andarAtual < andarDestino)
  {
  	andarAtual = andarAtual + 1;
    digitalWrite(m1, HIGH);
    digitalWrite(m2, LOW);
    ver_no_display(andarAtual);
    delay(1000);
  }

  while (andarAtual > andarDestino)
  {
  	andarAtual = andarAtual - 1;
    digitalWrite(m1, LOW);
    digitalWrite(m2, HIGH);
    ver_no_display(andarAtual);
    delay(1000);
  }

}

void ver_no_display (int numero){
  if (numero == 1){
    digitalWrite(b0, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(b2, LOW);
  } else if (numero == 2) {
    digitalWrite(b0, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
  } else if (numero == 3) {
    digitalWrite(b0, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(b2, LOW);
  } else if (numero == 4) {
    digitalWrite(b0, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(b2, HIGH);
  } else if (numero == 5) {
    digitalWrite(b0, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(b2, HIGH);
  }
}

