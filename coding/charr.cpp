#include <stdio.h>
#include <string.h>

int S(char* str) {
    int i, x = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')x++;
    }
    if (x == strlen(str))return 1;
    else return 0;
}

int main() {
    char str[100];
    int count[27] = { 0 }, max = 0, name = 0;
    int* maX = &max;
    printf("input a string : ");
    scanf("%s", str);
    if (S(str) == 1) {
        for (int i = 0; i < strlen(str); i++) {
            count[str[i] - 'a'] += 1;
            if (count[str[i] - 'a'] > * maX) *maX = count[str[i] - 'a'];
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] == *maX)printf("\nThe Highest frequency of character '%c'", i + 'a');
        }
        printf("\nappears number of times : %d ", *maX);
    }
    else printf("ERROR!!");
    return 0;
}