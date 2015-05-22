/**********************************************************************************
**                                                                               **
**                              Projecte 2. Lector de LLum                       **
**                                                                               **
**                                 Programa 2                                    **
**                                                                               **
**********************************************************************************/
// Raúl Martos


const int led0 = 9;          // LED 0 pin 9 
const int led1 = 7;          // LED 1 pin 7
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino


int velocitat = 20;          // velocitat de l'acció en ms
int valorLdr0;                 // guardar valor LDR 0  
int valorLdr1;                 // guardar valor LDR 1



void setup()
{
  pinMode (led0, OUTPUT);     // LED 0 Sortida
  pinMode (led1, OUTPUT);     // LED 1 Sortida
  pinMode (ldr0, INPUT);     // LDR 0 Entrada
  pinMode (ldr1, INPUT);     // LDR 1 Entrada
}


void loop()
{
  valorLdr0 = analogRead(ldr0);   // llegir valor LDR 0
  valorLdr1 = analogRead(ldr1);   // llegir valor LDR 1
  
  
  valorLdr0 = map(valorLdr0, 0, 1023, 0, 255);   // Transforma els valors que dona el LDR a valors que pot proporcionar el LED
  valorLdr1 = map(valorLdr1, 0, 1023, 0, 255);   
   
  
  analogWrite(led0, valorLdr0);    // actualitzar l'estat del LED
  analogWrite(led1, valorLdr1);    // actualitzar l'estat del LED
  
}

// Aquest programa és el mateix que l'anterior però amb més leds i LDRs, El que fa és llegir el valor del LDR i transformar aquest valor en el rang de 0-255 per poder iluminar el LED. Depenent del valor que tinguem al LDR donarà més o menys llum.
