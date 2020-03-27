/*
 *Ejercicio 2
*/

//*********HEADERS**************

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>			// Define pid_t
#include <unistd.h>			// Define fork, getpid y getppid

//*********INICIO PROGRAMA prc01.c**********

int main(){
        
        pid_t pid;
        int i;
        
        pid = fork();
        printf("Mi PID es %d y el PID de mi padre es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
        
        //Ejecute pstree en otra consola
        sleep(30);
        exit(0);
}

//El padre en este caso es el BASH.
//El espacio de proceso del padre se duplica para el hijo, menos el resultado del fork
//Espera 30 segundos
//Terminar
