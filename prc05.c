/*
 *Ejercicio 5
*/

//*********HEADERS**************

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>			// Define pid_t
#include <unistd.h>			// Define fork, getpid y getppid

//*********INICIO PROGRAMA prc05.c**********

int main(){
            
            int x = 100;
            
            printf("Soy el proceso: %d \n", getpid());
            
            switch (fork()){
                    
                case -1:        //No puede crearse el proceso
                        printf("Error. No se puede crear el proceso hijo :( . Es esteril este proceso");
                        break;
                case 0:         //Proceso hijo
                        printf("Soy el proceso hijo, mi PID es: %d, x = %d\n\n", getpid(), --x);              //El --x es decrecion en -1
                        break;
                default:        //Proceso padre
                        printf ("Soy el proceso padre, mi PID es: %d, x = %d\n", getpid(), ++x);
            }
  
 
 exit(0);
}

//
