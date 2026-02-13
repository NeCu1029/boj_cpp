#include <stdio.h>

int n, a, k, s;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a) k++;
        else k = 0;
        s += k;
    }
    printf("%d", s);
    return 0;
}