#include <stdio.h>

int n;
long long int res = 2;

int main() {
    scanf("%d", &n);
    if (n == 1) printf("0");
    else {
        for (int i = 0; i < n - 2; i++) res = res * 3ll % 1000000009ll;
        printf("%lld", res);
    }
    return 0;
}