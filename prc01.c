/*
 *Ejercicio 1
*/

//*********HEADERS**************

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>			// Define pid_t
#include <unistd.h>			// Define fork, getpid y getppid

//*********INICIO PROGRAMA prc01.c**********

int main(){
 printf("Mi PID es %d y el PID del padre es %d\n", getpid(),getppid());
 exit(0);
}

//El padre en este caso es el BASH.

/*
*	El PID es el identificador de procesos de cada proceso valga la redundancia
*	
*/
