/*
 *Ejercicio 3
*/

//*********HEADERS**************

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>			// Define pid_t
#include <unistd.h>			// Define fork, getpid y getppid

//*********INICIO PROGRAMA prc03.c**********

int main(){
	pid_t pid;
        int i;
        //Primera ejecucion de Fork
        pid = fork();
        printf("Primer Fork: Mi PID es %d y el PID de mi padre es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
        //Segunda ejecucion de Fork
        pid = fork();
        printf("Segundo Fork: Mi PID es %d y el PID de mi padre es %d. fork() devolvio %d\n", getpid(), getppid(), pid);
        
        //Ejecute pstree en otra consola
        sleep(30);
        exit(0);
}
