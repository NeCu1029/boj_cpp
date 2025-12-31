#include <stdio.h>

int n, curL, resL, cur[30005], res[30005];

int main() {
    scanf("%d", &n);
    cur[0] = n;
    
    for (int i = 1; i <= n; i++) {
        cur[1] = i;
        curL = 2;
        while (cur[curL - 2] - cur[curL - 1] >= 0) {
            cur[curL] = cur[curL - 2] - cur[curL - 1];
            curL++;
        }
        if (curL > resL) {
            resL = curL;
            for (int j = 0; j < curL; j++) res[j] = cur[j];
        }
    }

    printf("%d\n", resL);
    for (int i = 0; i < resL; i++) printf("%d ", res[i]);
    return 0;
}