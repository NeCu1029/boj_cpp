#include <stdio.h>

int n, q, c, x, y, flag;
char a[300005];

int main() {
    scanf("%d %d", &n, &q);
    scanf("%s", a + 1);
    while (q--) {
        scanf("%d", &c);
        if (c == 1) {
            scanf("%d", &x);
            if (a[x] == '0') a[x] = '1';
            else a[x] = '0';
        } else {
            scanf("%d %d", &x, &y);
            if (y - x >= 3) printf("YES\n");
            else {
                flag = 1;
                for (int i = x; i < y; i++) {
                    if (a[i] == a[i + 1]) {
                        printf("YES\n");
                        flag = 0;
                        break;
                    }
                }
                if (flag) printf("NO\n");
            }
        }
    }
    return 0;
}