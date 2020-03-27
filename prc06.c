//***********EJERCICIO 6 - TRABAJO PRACTICO N 1*******************

/*DATOS DE VARIABLES (TERMINAR DE COMPLETAR)
 * 
 * 
 * %x   entero en base 16, letras minusculas (int)
 * %f   coma flotante decimal de precision simple (float)
 * %lf  coma flotante decimal de precision doble (double)
 * %e   Notacion cientifica (mantisa / exponente), minusculas (decimal precision simple o doble)
 * %c   caracter (char)
 * %s   cadena de caracteres (string)
 * %ld  entero largo
 * %x   hexadecimal
 * %f   reales de 4 bytes (float)
 * %lf  reales de doble precision, 8 bytes (double)
 */

//****************HEADER********************

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//**************MAIN C**********************

int main(){
            
            int x = 100;
            
            printf("\nSoy el proceso: %d \n", getpid());
            
            switch (fork()){
                    
                case -1:        //No puede crearse el proceso
                        printf("Error. No se puede crear el proceso hijo :( . Es esteril este proceso");
                        break;
                case 0:         //Proceso hijo
                        printf("Soy el proceso hijo, mi PID es: %d, x = %d, direccion x = %ld \n", getpid(), --x, (&x));
                        break;
                default:        //Proceso padre
                        printf ("Soy el proceso padre, mi PID es: %d, x = %d, direccion x = %ld \n", getpid(), ++x, (&x));
            }
  
 printf("\n");
 exit(0);
}
