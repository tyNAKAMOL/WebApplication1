#include <stdio.h>
#include <string.h>

int isPrime(char* X) {
    int i, num = 0, count1 = 0, count2 = 0;
    int* p = &num;
    for (i = 0; i < strlen(X); i++) {
        if (X[i] >= '0' && X[i] <= '9') {
            count1++;
        }
    }
    if (count1 == strlen(X)) {
        for (i = 0; i < strlen(X); i++) {
            *p = X[i] - '0' + (*p) * 10;
        }
        for (i = 1; i <= (*p); i++) {
            if ((*p) % i == 0)count2++;
        }
        if (count2 == 2)return 1;
        else return 2;
    }
    else return 0;
}

int main() {
    char x[10];
    printf("Enter number : ");
    scanf("%s", x);
    if (isPrime(x) == 1)printf("prime");
    else if (isPrime(x) == 2) printf("not prime");
    else if (isPrime(x) == 0) printf("ERROR!!");

    return 0;
}