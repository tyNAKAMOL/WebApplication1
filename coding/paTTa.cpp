#include <stdio.h>
#include <string.h>

void patB(int x) {
    int i, j;
    for (i = 0; i < (2 * x) / 2; i++) {
        for (j = 0; j < (2 * x) - 1; j++) {
            if (j > i && j < (2 * x) - 2 - i)printf("  ");
            else printf("* ");
        }printf("\n");
    }
    for (i = ((2 * x) / 2) - 2; i >= 0; i--) {
        for (j = 0; j < (2 * x) - 1; j++) {
            if (j > i && j < (2 * x) - 2 - i)printf("  ");
            else printf("* ");
        }printf("\n");
    }
}
int main() {
    int x, i;
    char thank[] = { 'T','H','A','N','K',' ','Y','O','U' };
    printf("Input num : ");
    scanf("%d", &x);
    if (x >= 0) {
        patB(x);
        for (i = 0; i < 10; i++) {
            printf("%c", thank[i]);
        }
    }
    else printf("ERROR!!");
    return 0;
}