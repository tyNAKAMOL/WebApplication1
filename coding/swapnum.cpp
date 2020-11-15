#include <stdio.h>
#include <string.h>

int num(char* str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }
    if (count == strlen(str))return 1;
    else return 0;
}
void cPos(char* ch1, char* ch2) {
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void charPermu(char* cht, int st, int end) {
    int i;
    if (st == end)printf("%s\n", cht);
    else {
        for (i = st; i <= end; i++) {
            cPos((cht + st), (cht + i));
            charPermu(cht, st + 1, end);
            cPos((cht + st), (cht + i));
        }
    }
}
int main() {
    char String[10];
    printf("Input num : ");
    scanf("%s", String);
    if (num(String) == 1) {
        if (strlen(String) == 3 && String[0] != String[1] && String[1] != String[2] && String[0] != String[2]) {
            int n = strlen(String);
            charPermu(String, 0, n - 1);
        }
        else printf("ERROR");
    }
    else printf("ERROR");

    return 0;
}