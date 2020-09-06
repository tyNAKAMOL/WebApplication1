#include <stdio.h>

int Px(int x) {
    int i, sum = 0;
    int* pt1 = &sum;
    for (i = 1; i < x; i++) {
        if (x % i == 0) {
            (*pt1) += i;
        }
    }
    if ((*pt1) == x)return 1;
    else return 0;
}

int main() {
    int a, i, k = 0, sum = 0;
    int num[10];
    printf("Enter number : ");
    scanf("%d", &a);
    if (a <= 6)printf("P(x) = x : - ");
    else {
        for (i = 1; i < a; i++) {
            if (Px(i) == 1) {
                num[k++] = i;
            }
        }
        printf("P(x) = x : ");
        for (i = 0; i < k; i++) {
            printf("%d ", num[i]);
        }
    }
    return 0;
}