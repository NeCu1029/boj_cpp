#include <stdio.h>

int n, nx, ny, res = 10000, b, arr[20][20], cur[20][20];
int dx[5] = {0, -1, 1, 0, 0}, dy[5] = {0, 0, 0, -1, 1};

void change(int x, int y) {
    for (int i = 0; i < 5; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if (0 <= nx && nx < n && 0 <= ny && ny < n) cur[nx][ny] = !cur[nx][ny];
    }
    return;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);
    }

    for (int i = 0; i < (1 << n); i++) {
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) cur[x][y] = arr[x][y];
        }
        b = 0;

        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                change(0, j);
                b++;
            }
        }
        for (int x = 1; x < n; x++) {
            for (int y = 0; y < n; y++) {
                if (cur[x - 1][y]) {
                    change(x, y);
                    b++;
                }
            }
        }

        for (int j = 0; j < n; j++) {
            if (cur[n - 1][j]) b = 10000;
        }
        res = res > b ? b : res;
    }

    printf("%d", res == 10000 ? -1 : res);
    return 0;
}