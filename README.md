# Práctica 1: Procesos y Comunicación en C

## Autor
Juan Manuel Nucamendi Diaz

## Objetivo
Entender cómo funcionan los procesos en Linux, su creación con `fork()`, comunicación con señales y pipes.

## Archivos incluidos

| Archivo          | Descripción                               |
|------------------|-------------------------------------------|
| `forkprog1.c`    | Creación básica de procesos con `fork()`  |
| `forkprog2.c`    | Variables privadas entre padre e hijo     |
| `forkprog3.c`    | Ficheros compartidos entre procesos       |
| `execprog1.c`    | Uso de `execv()` para reemplazar programa |
| `execprog2.c`    | Programa invocado por `execprog1`         |
| `espe1.c`        | Uso de `wait()` para esperar al hijo      |
| `espe2.c`        | Sin `wait()`, hijo queda huérfano         |
| `signal.c`       | Manejo de señales (`SIGINT`)              |
| `sacrificio.c`   | Señales entre padre e hijo (`SIGUSR1`)    |
| `ejercicio1-7.c` | Padre imprime antes que hijo              |
| `ejercicio1-8.c` | Variable `varfork` diferente              |
| `ejercicio2-4.c` | Código inalcanzable tras `execv()`        |
| `ejercicio3-2.c` | Incremento diferente de `                 |
| `ejercicio4-2.c` | Hijo escribe más lento                    |
| `ejercicio5-1.c` | Padre termina 10s después                 |
| `ejercicio6-2.c` | Manejo de `SIGTERM`                       |
| `ejercicio7-2.c` | Intervención divina con `SIGUSR2`         |
| `capturas.pptx`  | Presentación con imágenes de ejecuciones  |

## Cómo compilar todos los archivos

```bash
gcc -Wall -o forkprog1 forkprog1.c
gcc -Wall -o forkprog2 forkprog2.c
gcc -Wall -o forkprog3 forkprog3.c
gcc -Wall -o execprog1 execprog1.c
gcc -Wall -o execprog2 execprog2.c
gcc -Wall -o espe1 espe1.c
gcc -Wall -o espe2 espe2.c
gcc -Wall -o signal signal.c
gcc -Wall -o sacrificio sacrificio.c
gcc -Wall -o ejercicio1-7 ejercicio1-7.c
gcc -Wall -o ejercicio1-8 ejercicio1-8.c
gcc -Wall -o ejercicio2-4 ejercicio2-4.c
gcc -Wall -o ejercicio3-2 ejercicio3-2.c
gcc -Wall -o ejercicio4-2 ejercicio4-2.c
gcc -Wall -o ejercicio5-1 ejercicio5-1.c
gcc -Wall -o ejercicio6-2 ejercicio6-2.c
gcc -Wall -o ejercicio7-2 ejercicio7-2.c
