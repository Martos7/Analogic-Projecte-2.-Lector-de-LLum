/**********************************************************************************
**                                                                               **
**                              Projecte 2. Lector de LLum                       **
**                                                                               **
**                                 Programa1                                     **
**                                                                               **
**********************************************************************************/
// Raúl Martos



const int led0 = 9;          // LED pin 9 
const int ldr = A0;         // LDR pin A0

int velocitat = 20;          // velocitat de l'acció en ms
int valorLdr;                 // guardar valor LDR


void setup()
{
  pinMode(led0, OUTPUT);   // LED és sortida
  pinMode (ldr, INPUT); // LDR és entrada
}


void loop()
{
  valorLdr = analogRead(ldr);   // llegir valor ldr
  
  valorLdr = map(valorLdr, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
  
  analogWrite(led0, valorLdr);    // actualitzar l'estat del led
}

// Aquest programa el que fa és llegir el valor que dona el LDR i amb aquest valor el "transforma" en l'intensitat lluminosa que ens proporciona el LED i no tapem el LDR el LED dona la màxima llum i si el tapem aquesta intensitat baixa.
