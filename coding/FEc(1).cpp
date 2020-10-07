#include <stdio.h>
#include <string.h>

void Fec(int n, int* f) {
    *f = 1;
    for (int i = n; i >= 1; i--) {
        (*f) = (*f) * i;
    }
}
int C(char* str) {
    int x = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            x++;
        }
    }
    if (x == strlen(str))return 1;
    else if (str[0] == '-' && x == strlen(str) - 1)return 2;
    else return 0;
}
int main() {
    char string[10];
    int f;
    int num = 0;
    int* a = &num;

    printf("Input a number : ");
    scanf("%s", string);
    //printf("%d",C(string));
    if (C(string) == 2 || C(string) == 0)printf("ERROR!!");
    else {
        for (int i = 0; i < strlen(string); i++) {
            (*a) = string[i] - '0' + (*a) * 10;
        }
        if (num <= 10) {
            Fec(num, &f);
            printf("The Factorial of %d is : %d ", num, f);
        }
        else printf("ERROR!!");
    }
    return 0;
}