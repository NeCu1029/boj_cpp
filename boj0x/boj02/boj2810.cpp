#include <stdio.h>

int n, s, l;
char c[55];

int main() {
    scanf("%d", &n);
    scanf("%s", c);
    for (int i = 0; i < n; i++) {
        if (c[i] == 'S') s++;
        else l++;
    }
    if (l) printf("%d", s + l / 2 + 1);
    else printf("%d", s);
    return 0;
}