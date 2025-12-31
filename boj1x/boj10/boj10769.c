#include <stdio.h>
#include <string.h>

int n, a, b;
char s[300];

int main() {
    fgets(s, 300, stdin);
    n = strlen(s);
    if (n < 3) {
        printf("none");
        return 0;
    }

    for (int i = 0; i <= n - 3; i++) {
        if (s[i] == ':' && s[i + 1] == '-' && s[i + 2] == ')') a++;
        if (s[i] == ':' && s[i + 1] == '-' && s[i + 2] == '(') b++;
    }
    if (a > b) printf("happy");
    else if (a < b) printf("sad");
    else printf("unsure");
    return 0;
}