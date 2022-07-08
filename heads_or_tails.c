#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main (int argc, char *args[]) {
    unsigned int heads = 0, tails = 0;

    printf("Tossing a coin...\n");
    srand(time(0));
    for (unsigned int i=1; i<=N; i++) {
        printf("Round %d: ", i);
        if (rand() % 2) {
            printf("Heads\n");
            heads++;
        }
        else {
            printf("Tails\n");
            tails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", heads, tails);

    return 0;
}