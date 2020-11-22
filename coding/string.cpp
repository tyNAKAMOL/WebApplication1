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
    char name[50];
    char* pt;
    int  ctrX, ctrC;
    printf("Key name : ");
    scanf("%s", &name);
    printf("Count the number of X,x\n");
    printf("Input a string: ");
    scanf("%s", &input);
    if (ABC(input) == 1) {
        pt = input;
        ctrX = ctrC = 0;
        while (*pt != '\0') {
            if (*pt == 'X' || *pt == 'x')
                ctrX++;
            else
                ctrC++;
            pt++;
        }
        printf("HELLO! ");
        for (int k = 0; k < strlen(name); k++) {
            printf("%c", name[k]);
        }
        printf("\nNumber of X,x : %d\n", ctrX);
    }
    else printf("error");
    return 0;
}