#include <stdio.h>

int t, n;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if (n % 25 < 17) printf("ONLINE\n");
        else printf("OFFLINE\n");
    }
    return 0;
}