#include <stdio.h>

int n;
long long int a, b;

int main() {
    scanf("%d %d", &n, &a);
    for (int i = 1; i < n; i++) {
        scanf("%d", &b);
        if (a == b) {
            printf("0");
            return 0;
        }
        a = b;
    }
    printf("1");
    return 0;
}