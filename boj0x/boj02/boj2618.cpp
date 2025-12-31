#include <stdio.h>
#include <algorithm>

using namespace std;

int n, w, px, py, pos[1005][2], dp[1005][1005], bef[1005][1005];

int dist(int no, int s, int e) {
    int sx, sy, ex, ey;
    if (s == 0) {
        sx = no == 1 ? 1 : n;
        sy = no == 1 ? 1 : n;
    } else {
        sx = pos[s][0];
        sy = pos[s][1];
    }
    ex = pos[e][0];
    ey = pos[e][1];

    return abs(sx - ex) + abs(sy - ey);
}

int recur(int i, int j) {
    if (i == w || j == w) return 0;
    if (dp[i][j]) return dp[i][j];

    int x = max(i, j);
    int v1 = recur(x + 1, j) + dist(1, i, x + 1);
    int v2 = recur(i, x + 1) + dist(2, j, x + 1);
    if (v1 <= v2) bef[i][j] = 1;
    else bef[i][j] = 2;
    return dp[i][j] = min(v1, v2);
}

int main() {
    scanf("%d", &n);
    scanf("%d", &w);
    for (int i = 1; i <= w; i++) {
        scanf("%d %d", &px, &py);
        pos[i][0] = px;
        pos[i][1] = py;
    }
    px = 0;
    py = 0;
    
    recur(0, 0);
    printf("%d\n", dp[0][0]);
    for (int i = 1; i <= w; i++) {
        printf("%d\n", bef[px][py]);
        if (bef[px][py] == 1) px = i;
        else py = i;
    }
    return 0;
}