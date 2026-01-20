#include <stdio.h>
#include <string.h>

int n, res;
char s[20], t[20];

int main() {
    scanf("%s", s);
    s[5] = '\0';
    scanf("%d", &n);
    while (n--) {
        scanf("%s", t);
        t[5] = '\0';
        if (!strcmp(s, t)) res++;
    }
    printf("%d", res);
    return 0;
}