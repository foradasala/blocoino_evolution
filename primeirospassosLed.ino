/*
  Ledsimples Bloco.ino

  Pisca um Led conectado ao Arduino.
  
  Criado em 8 de Dezembro de 2019
  por www.foradasala.com.br
  
 
*/


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
// Esta é a área de parametrização do seu programa //////////
// Bloco.ino. Altere os parâmetros indicados abaixo /////////
// obter diferentes comportamentos em seu projeto  //////////
/////////////////////////////////////////////////////////////


// indique abaixo o numero do pino onde estão os leds 
#define   PINO_DO_LED  13

// indique abaixo o tempo que cada sinal deve ficar aceso (em segundos)
#define   TEMPO_LED_EM_SEGUNDOS   5



/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////





// a função de setup é executada apenas uma vez, quando o arduino é inicializado
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PINO_DO_LED, OUTPUT);
}

// esta função roda continuamente
void loop() {
  digitalWrite(PINO_DO_LED, HIGH);  
  delay(TEMPO_LED_EM_SEGUNDOS*1000);                     
  digitalWrite(PINO_DO_LED, LOW);    
  delay(TEMPO_LED_EM_SEGUNDOS*1000);                     
}
