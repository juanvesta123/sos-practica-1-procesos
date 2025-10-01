#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int varfork = 10;
    pid_t rf;
    rf = fork();
    switch (rf) {
        case -1:
            printf("Error\n");
            break;
        case 0:
            for (int i = 0; i < 10; i++) varfork++;
            printf("Hijo: varfork = %d\n", varfork);
            break;
        default:
            for (int i = 0; i < 10; i++) varfork += 10;
            printf("Padre: varfork = %d\n", varfork);
    }
    exit(0);
}
