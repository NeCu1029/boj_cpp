#include <stdio.h>

int n;
char s[105];

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        printf("%sDORO ", s);
    }
    return 0;
}