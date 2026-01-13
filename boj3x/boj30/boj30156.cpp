#include <stdio.h>
#include <string.h>

int t, n, a, b;
char s[105];

int main() {
    scanf("%d", &t);
    while (t--) {
        a = 0; b = 0;
        scanf("%s", s);
        n = strlen(s);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') a++;
            else b++;
        }
        printf("%d\n", a < b ? a : b);
    }
    return 0;
}