#include <stdio.h>
#include <string.h>
void changePosition(char* ch1, char* ch2) {
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
            changePosition((cht + st), (cht + i));
            charPermu(cht, st + 1, end);
            changePosition((cht + st), (cht + i));
        }
    }
}
int main() {
    char String[10];
    printf("Input string : ");
    scanf("%s", String);
    if (strlen(String) == 3 && String[0] != String[1] && String[1] != String[2] && String[0] != String[2]) {
        int n = strlen(String);
        charPermu(String, 0, n - 1);
    }
    else printf("ERROR");
    return 0;
}
