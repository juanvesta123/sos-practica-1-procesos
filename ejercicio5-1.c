#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>

int main() {
    pid_t rf;
    rf = fork();
    switch (rf) {
        case -1:
            printf("\nNo he podido crear el proceso hijo");
            break;
        case 0:
            printf("Soy el hijo, mi PID es %d y mi PPID es %d\n", getpid(), getppid());
            sleep(10); // Hijo duerme 10 segundos
            break;
        default:
            printf("Soy el padre, mi PID es %d y el PID de mi hijo es %d\n", getpid(), rf);
            wait(0); // Espera a que el hijo termine
            sleep(10); // <-- Padre duerme 10 segundos MÁS
    }
    printf("\nFinal de ejecucion de %d \n", getpid());
    exit(0);
}
