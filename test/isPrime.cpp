#include <stdio.h>

int isPrime(int X) {
    int i, count = 0;
    for (i = 1; i <= X; i++) {
        if (X%i == 0)count++;
    }
    if (count == 2)return 1;
    else return 0;
}

int main() {
    int x;
    scanf("%d", &x);
    if (isPrime(x) == 1)printf("%d is prime", x);
    else printf("%d is not prime", x);
    return 0;
}