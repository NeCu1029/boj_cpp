#include <stdio.h>

int n, k, v, dj[5];

int main() {
    scanf("%d", &n);
    while (n--) {
        for (int i = 1; i < 5; i++) dj[i] = 0;
        scanf("%d", &k);
        while (k--) {
            scanf("%d", &v);
            dj[v]++;
        }
        scanf("%d", &k);
        while (k--) {
            scanf("%d", &v);
            dj[v]--;
        }

        for (int i = 1; i < 5; i++) {
            if (dj[i] > 0) {
                printf("A\n");
                break;
            } else if (dj[i] < 0) {
                printf("B\n");
                break;
            } else if (i == 4) {
                printf("D\n");
                break;
            }
        }
    }

    return 0;
}