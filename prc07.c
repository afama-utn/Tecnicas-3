//*************EJERCICIO 7*******************

//****************HEADER********************

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//**************MAIN C**********************

int main(){
            
            int i;
            pid_t pid;
            
            for( i=1 ; i<4 ; i++){
             pid = fork();
             printf ("Mi PID es %d y el PID de mi padre es %d. fork() devuelve %d, i= %d\n", getpid(),getppid(),pid,i);
            }
            sleep(30);
            
 exit(0);
}
