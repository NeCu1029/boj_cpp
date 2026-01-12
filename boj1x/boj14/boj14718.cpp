#include <stdio.h>

int n, k, arr[105][3], stat[3], cur, res = 1 << 30;

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            for (int z = 0; z < n; z++) {
                stat[0] = arr[x][0];
                stat[1] = arr[y][1];
                stat[2] = arr[z][2];
                cur = 0;
                for (int i = 0; i < n; i++) {
                    if (stat[0] >= arr[i][0] && stat[1] >= arr[i][1] && stat[2] >= arr[i][2]) cur++;
                }
                if (cur >= k && stat[0] + stat[1] + stat[2] <= res) res = stat[0] + stat[1] + stat[2];
            }
        }
    }

    printf("%d", res);
    return 0;
}