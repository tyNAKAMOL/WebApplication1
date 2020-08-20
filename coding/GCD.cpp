#include<stdio.h>

void swap(int* x, int* y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
int main() {
    int num[2], tmp, c, x = 0;
    printf("Enter first number : ");
    scanf("%d", &num[0]);
    printf("Enter second number : ");
    scanf("%d", &num[1]);
    if (num[0] == 0 || num[1] == 0)printf("ERROR");
    if (num[0] == num[1])printf("Greatest common divisor = %d", num[0]);
    else {
        if (num[0] > num[1]) {
            swap(&num[0], &num[1]);
        }
        if (num[1] % num[0] == 0)printf("Greatest common divisor = %d", num[0]);
        else {
            while (num[1] % num[0] != 0) {
                c = num[1] % num[0];
                num[1] = num[0];
                num[0] = c;
            }
            printf("Greatest common divisor = %d", c);
        }
    }
    return 0;
}