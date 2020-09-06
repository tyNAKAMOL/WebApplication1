#include<stdio.h>
int main() {
    int n, i, j, k = 0;
    int B[] = { 'b','u','t','t','e','r','f','l','y' };
    printf("Enter number : ");
    scanf("%d", &n);
    if (n >= 0) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < (2 * n) - 1; j++, k++) {
                if (j > i && j < (2 * n - i - 2))printf("  ");
                else printf("* ");
            }printf("\n");
        }

        for (i = n - 2; i >= 0; i--) {
            for (j = 0; j < (2 * n) - 1; j++, k++) {
                if (j > i && j <= (2 * n - i - 3))printf("  ");
                else printf("* ");
            }printf("\n");
        }
        for (i = 0; i < 9; i++) {
            printf("%*c", n - (n - 2), B[i]);
        }
    }
    else printf("ERROR");
    return 0;
}