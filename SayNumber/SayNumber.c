#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL)); // initialize the random number generator

    int N = atoi(argv[1]);
    printf("N = %d\n", N);

    return 0;
}
