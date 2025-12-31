#include <stdio.h>
#include <deque>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, k, x, y, z, tmp, tmp2, res;
int a[15][15], nu[15][15], cnt[15][15];
deque<int> tree[15][15];

int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            nu[i][j] = 5;
            scanf("%d", &a[i][j]);
        }
    }
    while (m--) {
        scanf("%d %d %d", &x, &y, &z);
        tree[x][y].push_back(z);
        cnt[x][y]++;
    }

    while (k--) {
        // 봄, 여름, 겨울
        for (x = 1; x <= n; x++) {
            for (y = 1; y <= n; y++) {
                tmp = 0;
                tmp2 = cnt[x][y];
                while (tmp2--) {
                    z = tree[x][y].front();
                    tree[x][y].pop_front();
                    if (nu[x][y] >= z) {
                        nu[x][y] -= z;
                        tree[x][y].push_back(z + 1);
                    }
                    else {
                        tmp += z / 2;
                        cnt[x][y]--;
                    }
                }
                nu[x][y] += tmp + a[x][y];
            }
        }

        // 가을
        for (x = 1; x <= n; x++) {
            for (y = 1; y <= n; y++) {
                for (int i = 0; i < cnt[x][y]; i++) {
                    z = tree[x][y][i];
                    if (z % 5 == 0) {
                        for (tmp = 0; tmp < 8; tmp++) {
                            if (!(0 <= x + dx[tmp] < n)) continue;
                            if (!(0 <= y + dy[tmp] < n)) continue;
                            tree[x + dx[tmp]][y + dy[tmp]].push_front(1);
                            cnt[x + dx[tmp]][y + dy[tmp]]++;
                        }
                    }
                }
            }
        }
    }

    for (x = 1; x <= n; x++) {
        for (y = 1; y <= n; y++) res += cnt[x][y];
    }
    printf("%d", res);
    return 0;
}