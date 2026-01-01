#include <stdio.h>

int ans, res;

int main() {
    for (int i = 1; i <= 9; i++) {
        printf("? A %d\n", i);
        fflush(stdout);
        scanf("%d", &ans);
        if (ans) res += i;
    }
    for (int i = 1; i <= 9; i++) {
        printf("? B %d\n", i);
        fflush(stdout);
        scanf("%d", &ans);
        if (ans) res += i;
    }
    printf("! %d", res);
    fflush(stdout);
    return 0;
}