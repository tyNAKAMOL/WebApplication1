#include <stdio.h>
#include <math.h>

int main() {
    int num[5], i = 0, sum = 0, j;
    double m = 0, sum2 = 0, Xbar = 0;
    printf("Input a number (5 numbers) : ");
    i = 0;
    while (i < 5) {
        scanf("%d", &num[i]);
        sum += num[i];
        i++;
    }
    Xbar = (sum / 5);
    for (i = 0; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (num[j] > num[i]) {
                int t = num[j];
                num[j] = num[i];
                num[i] = t;
            }
        }
    }
    i = 1;
    while (i < 5) {
        printf("%d ", num[i]);
        i++;
    }
    printf("%d", num[0]);
    i = 0;
    while (i < 5) {
        sum2 += abs(num[i] - Xbar);
        i++;
    }

    printf("\nXbar = %.2lf", Xbar);
    printf("\nSigms|SigmaX-Xbar| = %.2lf", sum2);
    printf("\nN = 5");
    printf("\nM.D = %.2lf", sum2 / 5);

    return 0;
}