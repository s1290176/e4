#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define NAME_LENGTH 20

int main (int argc, char *args[]) {
    unsigned int heads = 0, tails = 0;
    char name[NAME_LENGTH];

    printf("Who are you?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

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

    if (heads > tails) printf("You won!\n");
    else printf("You lost...\n");

    return 0;
}