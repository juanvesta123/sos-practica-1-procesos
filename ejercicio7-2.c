#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>

#define VUELTAS 10000000000LL

void hijo(int sig) {
    printf("\t\t¡Padre! ¿Qué haces?\n");
    printf("\t\tFinal de ejecución de %d \n", getpid());
    kill(getppid(), SIGUSR1);
    exit(0);
}

void padre(int sig) {
    printf("\t¡Hijo! ¿Qué he hecho?\n");
    printf("\tFinal de ejecución de %d \n", getpid());
    exit(0);
}

void dios(int sig) {
    printf("\t¡El Señor ha intervenido! ¡Se ha interrumpido el sacrificio!\n");
    exit(0);
}

int main(void) {
    long long int i;
    pid_t rf;

    rf = fork();
    switch (rf) {
        case -1:
            printf("No he podido crear el proceso hijo. \n");
            break;
        case 0:
            printf("\t\tSoy Isaac, mi PID es %d y mi PPID es %d. \n", getpid(), getppid());
            signal(SIGUSR1, hijo);
            for (i=0; i<VUELTAS; i++);
            break;
        default:
            printf("\tSoy Abraham, mi PID es %d y el PID de mi hijo es %d. \n", getpid(), rf);
            signal(SIGUSR1, padre);
            signal(SIGUSR2, dios); // <-- NUEVA LÍNEA
            sleep(1);
            printf("\tVoy a matar a mi hijo.\n");
            sleep(15); // <-- Tienes 15 segundos para enviar SIGUSR2
            kill(rf, SIGUSR1);
            for (i=0; i<VUELTAS; i++);
    }
    exit(0);
}
