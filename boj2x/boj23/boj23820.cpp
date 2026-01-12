#include <stdio.h>

int n, a, ex[2000005], res[2000005];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        ex[a] = 1;
    }
    if (ex[0] == 0) {
        printf("0");
        return 0;
    }

    for (int i = 1; i * i <= 2000003; i++) {
        if (ex[i] == 0) continue;
        for (int j = i; i * j <= 2000003; j++) {
            if (ex[j]) res[i * j] = 1;
        }
    }
    for (int i = 1; i <= 2000003; i++) {
        if (res[i] == 0) {
            printf("%d", i);
            return 0;
        }
    }
}