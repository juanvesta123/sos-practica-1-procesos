#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>

#define VUELTAS 10000000000LL

void manejar_sigterm(int sig) {
    write(1, "No quiero terminar\n", 19);
}

int main(void) {
    long long int i;

    signal(SIGTERM, manejar_sigterm);

    write(1, "Esperando señales...\n", 21);
    for (i=0; i<VUELTAS; i++);

    exit(0);
}
