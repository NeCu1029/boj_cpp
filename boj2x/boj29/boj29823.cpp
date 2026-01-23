#include <stdio.h>
#include <math.h>

int n, x, y;
char s[1005];

int main() {
    scanf("%d", &n);
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'E') x++;
        if (s[i] == 'W') x--;
        if (s[i] == 'N') y++;
        if (s[i] == 'S') y--;
    }
    printf("%d", abs(x) + abs(y));
    return 0;
}