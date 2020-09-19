#include <stdio.h>
#include <string.h>
#include <math.h>

int ToF(char* str) {
    int i, t = 0, l = 0, l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0;
    i = 0;
    while (i < strlen(str)) {
        if (str[i] >= 'a' && str[i] <= 'z')l++;
        i++;
    }
    i = 0;
    while (i < strlen(str)) {
        if (str[i] == '-' && str[i + 1] == '-' || str[i] == '+' && str[i + 1] == '+')l6++;
        i++;
    }
    i = 0;
    while (i < strlen(str)) {
        if (str[i] == 'x')l1++;
        if (str[i] == 'y')l2++;
        if (str[i] == '+')l3++;
        if (str[i] == '-')l4++;
        if (str[i] == '=')l5++;
        i++;
    }
    if (l1 == 1 && l2 == 1 && l5 == 1 && l == 2 && l6 == 0) {
        t = l1 + l2 + l3 + l4 + l5;
    }
    return t;
}

double A(char* str) {
    int i, a = 0, z = 0;
    z = str[0] == '-' ? 1 : 0;
    for (i = z; i < strlen(str); i++) {
        if (str[i] == 'x')break;
        a = (str[i] - '0') + a * 10;
    }
    int* A = &a;
    if (str[0] == '-') (*A) = -(*A);
    else (*A) = (*A);
    return a;
}

double B(char* str) {
    int i, b = 0, z = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'x')break;
        z++;
    }
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'x') {
            b = (str[i + 2] - '0') + b * 10;
            if (str[i] == 'y')break;
        }
    }
    int* B = &b;
    if (str[z + 1] == '-') (*B) = -(*B);
    else (*B) = (*B);
    return b;
}

double C(char* str) {
    int i, c = 0, z = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'y')break;
        z++;
    }
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'y') {
            c = (str[i + 2] - '0') + c * 10;
            if (str[i] == '=')break;
        }
    }
    int* C = &c;
    if (str[z + 1] == '-') (*C) = -(*C);
    else (*C) = (*C);
    return c;
}
int main() {
    printf("Distance Between a Line and a Line (D)");
    printf(" \n");
    char Eq1[50], Eq2[50];
    double x = 0, y = 0;

    printf("1) Ax+By+C1=0 >> ");
    scanf("%s", Eq1);
    printf("2) Ax+By+C2=0 >> ");
    scanf("%s", Eq2);

    if ((ToF(Eq1) == 5 || ToF(Eq2) == 5) || (ToF(Eq1) == 6 || ToF(Eq2) == 6)) {
        if ((A(Eq1) == A(Eq2)) && (B(Eq1) == B(Eq2))) {
            printf("Equation1 = %s", Eq1);
            printf("\nEquation2 = %s", Eq2);
            x = abs(C(Eq1) - C(Eq2));
            y = sqrt(pow(A(Eq1), 2) + pow(B(Eq1), 2));
            printf("\nD = %.2lf", x / y);
        }
        else printf("ERROR !!");
    }
    else printf("ERROR !!");
    return 0;
}
