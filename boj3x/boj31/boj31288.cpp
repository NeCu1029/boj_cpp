#include <stdio.h>
#include <string.h>

int t, n, s;
char p[105], q[105];

int main() {
    scanf("%d", &t);
    while (t--) {
        s = 0;
        scanf("%d %s", &n, p);
        if (n == 1) {
            printf("4 2\n");
            continue;
        }
        for (int i = 0; i < n; i++) s += p[i] - '0';

        for (int i = 0; i < n; i++) {
            strcpy(q, p);
            if (s % 3 == 1) {
                if (q[i] <= '1') q[i] += 2;
                else q[i]--;
            } else {
                if (q[i] == '9') q[i] = '7';
                else q[i]++;
            }
            printf("%s 3\n", q);
        }
    }
    return 0;
}