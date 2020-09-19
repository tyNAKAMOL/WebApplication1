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

double D(char* str, int x, int y) {
    int i, a = 0, b = 0, c = 0, c1 = 0, c2 = 0, c3 = 0, z = 0;
    int num[3];
    char scp1[5], scp2[5], scp3[5];
    double d = 0, n = 0, m = 0;
    z = str[0] == '-' ? 1 : 0;
    for (i = z; i < strlen(str); i++) {
        if (str[i] == 'x')break;
        a = (str[i] - '0') + a * 10;
        c1++;
    }
    int* A = &a;
    for (i = z + c1 + 2; i < strlen(str); i++) {
        if (str[i] == 'y')break;
        b = (str[i] - '0') + b * 10;
        c2++;
    }
    int* B = &b;
    for (i = z + c1 + c2 + 4; i < strlen(str); i++) {
        if (str[i] == '=')break;
        c = (str[i] - '0') + c * 10;
    }
    int* C = &c;
    if (str[0] == '-')num[0] = -(*A);
    else num[0] = (*A);
    if (str[z + c1 + 1] == '-')num[1] = -(*B);
    else num[1] = (*B);
    if (str[z + c1 + c2 + 3] == '-')num[2] = -(*C);
    else num[2] = (*C);
    n = abs((num[0]) * (x)+(num[1]) * (y)+(num[2]));
    m = sqrt(pow(num[0], 2) + pow(num[1], 2));
    d = n / m;
    return d;
}
int main() {
    printf("Distance Between a Point and a Line (D)");
    printf(" \n");
    int i, x, y;
    char Eq[50];

    printf("Ax+By+C=0 >> ");
    scanf("%s", Eq);
    printf("(x,y) >> ");
    scanf("%d%d", &x, &y);

    if (ToF(Eq) == 5 || ToF(Eq) == 6) {
        printf("Equation = %s", Eq);
        printf("\nposition = (%d,%d)", x, y);
        printf("\nD = %.2lf", D(Eq, x, y));
    }
    else printf("ERROR !!");
    return 0;
}
