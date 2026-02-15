#include <stdio.h>

int res;
char s[1005], ob[10] = "KOREA";

int main() {
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == ob[res % 5]) res++;
    }
    printf("%d", res);
    return 0;
}