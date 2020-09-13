#include <stdio.h>
#include <string.h>

int ABC(char* str) {
    int k = 0;
    for (int i = 0; i < 3; i++) {
        if (str[i] >= 'X' && str[i] <= 'Z') {
            k++;
        }
    }
    if (k == strlen(str))return 1;
    else return 0;
}

int main() {
    int num[3], i = 0, j = 1;
    char name[4];
    for (i = 0; i < 3; i++)
        scanf("%d", &num[i]);
    scanf("%s", name);

    for (i = 0; i < 3; i++) {
        for (j = 1; j < 3; j++) {
            if (num[j] > num[i]) {
                int t = num[j];
                num[j] = num[i];
                num[i] = t;
            }
        }
    }
    int* p1 = &num[0];
    int* p2 = &num[1];
    int* p3 = &num[2];
    if (ABC(name) == 1 && strlen(name) == 3) {
        for (i = 0; i < 3; i++) {
            if (name[i] == 'X')
                printf("%d ", *p2);
            else if (name[i] == 'Y')
                printf("%d ", *p3);
            else if (name[i] == 'Z')
                printf("%d ", *p1);
        }
    }
    else printf("ERROR!!");
    return 0;
}