#include <stdio.h>

int n, s;

int main() {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (s + n >= 100) {
            if (s + n - 100 > 100 - s) printf("%d", s);
            else printf("%d", s + n);
            return 0;
        }
        s += n;
    }
    printf("%d", s);
    return 0;
}