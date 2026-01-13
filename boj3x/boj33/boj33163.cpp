#include <stdio.h>

int n;
char s[105];

int main() {
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'J') printf("O");
        else if (s[i] == 'O') printf("I");
        else printf("J");
    }
    return 0;
}