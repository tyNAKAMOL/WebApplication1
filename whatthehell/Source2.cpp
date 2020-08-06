#include <stdio.h>
void triangle(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            printf("*");
        }
    }
}
int main() {
    int n;
    scanf("%d ", &n);
    triangle(n);
    return 0;
}