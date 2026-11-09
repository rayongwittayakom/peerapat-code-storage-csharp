#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int answer;

const char* validation(int a, int b) {
    if (a < b) {
        answer = 1;
        return "Sorry pal, your guess is too low";
    }
    if (a > b) {
        answer = 2;
        return "Sorry pal, your guess is quite a bit too high";
    }
    answer = 0;
    return "THATS MY PAL, YOU FINALLY GOT IT RIGHT";
}

int main(void) {
    // Seed random number generator
    srand((unsigned int)time(NULL));

    // Generate random number between 0 and 100 inclusive
    int r = rand() % 101;
    int ans;

    do {
        printf("Enter your guess: ");
        if (scanf_s("%d", &ans) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }

        // Print response string returned from validation
        printf("%s\n", validation(ans, r));

    } while (answer != 0);

    return 0;
}