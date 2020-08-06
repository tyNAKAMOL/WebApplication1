#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char player() {
    char shape;
    printf("[r]ock,[p]aper,[s]cissor >> ");
    scanf("%c", &shape);
    return shape;
}

char randomShape() {
    int n = rand() % 3;
    char x[] = { 'r','p','s' };
    return x[n];
}

int main() {
    srand(time(NULL));
    // printf("%c",randomShape());
    char You = player();
    char Com = randomShape();
    printf("You = %c,Com = %c \n", You, Com);
    if (You == 'r' && Com == 's') {
        printf("You Won!!\n");
    }
    else if (You == 'p' && Com == 'r') {
        printf("You Won!!\n");
    }
    else if (You == 's' && Com == 'p') {
        printf("You Won!!\n");
    }
    if (You == 'r' && Com == 'p') {
        printf("Game over!!\n");
    }
    if (You == 's' && Com == 'r') {
        printf("Game over!!\n");
    }
    if (You == 'p' && Com == 's') {
        printf("Game over!!\n");
    }
    if (You == Com) {
        printf("tie!!\n");
    }


    return 0;
}
