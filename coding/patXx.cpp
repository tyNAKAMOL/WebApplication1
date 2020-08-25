#include <stdio.h>

int main() {
    int i, j, n;
    char KMITL[] = { 'K','M','I','T','L' };
    printf("Input number : ");
    scanf("%d", &n);
    if (n > 0&& n <= 10) {
        for (i = 0; i < n * 2 + 1; i++) {
            for (j = 0; j < n * 2 + 1; j++) {
                if (i + j == n * 2 || i == j) {
                    printf("%c", KMITL[j % 5]);
                }
                else printf(" ");
            }printf("\n");
        }
    }
    else printf("Error");
    return 0;
}