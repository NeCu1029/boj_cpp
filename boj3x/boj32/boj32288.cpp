#include <stdio.h>

int n;
char s[505];

int main() {
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'l') printf("L");
        else printf("i");
    }
    return 0;
}