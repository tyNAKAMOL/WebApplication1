#include <stdio.h>
#include<string.h>

int ABC(char* str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
    if (count == strlen(str))return 1;
    else return 0;
}

int main()
{
    char input[50];
    char* pt;
    int  ctrA, ctrC;
    printf("Count the number of A,a\n");
    printf("Input a string: ");
    scanf("%s", &input);
    if (ABC(input) == 1) {
        pt = input;
        ctrA = ctrC = 0;
        while (*pt != '\0') {
            if (*pt == 'A' || *pt == 'a')
                ctrA++;
            else
                ctrC++;
            pt++;
        }
        printf("Number of A,a : %d\n", ctrA);
    }
    else printf("error");
    return 0;
}