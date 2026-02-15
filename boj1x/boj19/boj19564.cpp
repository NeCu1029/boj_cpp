#include <stdio.h>

int cnt = 1;
char s[100005];

int main() {
    scanf("%s", s);
    for (int i = 1; s[i]; i++) {
        if (s[i - 1] >= s[i]) cnt++;
    }
    printf("%d", cnt);
    return 0;
}