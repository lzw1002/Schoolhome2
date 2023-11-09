#include <stdio.h>

void hanoi(int n, char from, char to, char aux);

int main() {
    int numDisks = 3; 
    printf("The steps to move the Tower of Hanoi are as follows::\n");
    hanoi(numDisks, 'A', 'C', 'B');

    return 0;
}

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("move the disc 1 from %c to %c\n", from, to);
        return;
    }

    hanoi(n - 1, from, aux, to);
    printf("move the disc %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}
