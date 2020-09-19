#include<stdio.h>

int NAND(int x, int y) {
    if (x == 1 && y == 1)return 0;
    else return 1;
}
int NOR(int x, int y) {
    if (x == 0 && y == 0)return 1;
    else return 0;
}
int XNOR(int x, int y) {
    if (x == y)return 1;
    else return 0;
}
int XOR(int x, int y) {
    if (x != y)return 1;
    else return 0;
}
int OR(int x, int y) {
    if (x == 0 && y == 0)return 0;
    else return 1;
}
int AND(int x, int y) {
    if (x == 1 && y == 1)return 1;
    else return 0;
}
int main() {
    int i, a, A, B, Q, input[2];
    printf("[1]NOT GATE\n[2]NAND GATE\n[3]NOR GATE\n[4]XNOR GATE\n");
    printf("[5]XOR GATE\n[6]OR GATE\n[7]AND GATE\n");
    printf("\nEnter GATE : ");
    scanf("%d", &a);
    if (a == 1) {
        printf("\nINPUT A = ");
        scanf("%d", &A);
        Q = A == 1 ? 0 : 1;
        printf("OUTPUT = %d", Q);
    }
    else {
        printf("INPUT A = ");
        scanf("%d", &input[0]);
        printf("INPUT B = ");
        scanf("%d", &input[1]);
        int* pt1 = &input[0];
        int* pt2 = &input[1];
        if (a == 2)printf("\nOUTPUT = %d", NAND(*pt1, *pt2));
        if (a == 3)printf("\nOUTPUT = %d", NOR(*pt1, *pt2));
        if (a == 4)printf("\nOUTPUT = %d", XNOR(*pt1, *pt2));
        if (a == 5)printf("\nOUTPUT = %d", XOR(*pt1, *pt2));
        if (a == 6)printf("\nOUTPUT = %d", OR(*pt1, *pt2));
        if (a == 7)printf("\nOUTPUT = %d", AND(*pt1, *pt2));
    }
    return 0;
}