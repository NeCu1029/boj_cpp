#include <stdio.h>
#include <queue>
#include <utility>

using namespace std;

int n, vis[1005][1005], l, r, res;
char s[1505], idx[5] = "DLB";
pair<int, int> p;
queue<pair<int, int>> q;

int main() {
    scanf("%d", &n);
    scanf("%s", s);
    vis[0][3 * n - 1] = 1;
    res = 3 * n - 1;
    q.push(pair<int, int>(0, 3 * n - 1));

    while (!q.empty()) {
        p = q.front();
        q.pop();
        l = p.first; r = p.second;
        if (idx[(r - l) % 3] == s[l]) {
            res = res < r - l - 1 ? res : r - l - 1;
            if (l < r && vis[l + 1][r] == 0) {
                vis[l + 1][r] = 1;
                q.push(pair<int, int>(l + 1, r));
            }
        }
        if (idx[(r - l) % 3] == s[r]) {
            res = res < r - l - 1 ? res : r - l - 1;
            if (l < r && vis[l][r - 1] == 0) {
                vis[l][r - 1] = 1;
                q.push(pair<int, int>(l, r - 1));
            }
        }
    }

    printf("%d", 3 * n - res - 1);
    return 0;
}