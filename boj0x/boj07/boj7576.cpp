#include <iostream>
#include <fstream>
#include <utility>
#include <queue>
#include <map>
#define x first
#define y second
// #define LOCAL

using namespace std;

int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
int m, n, res, arr[1005][1005], vis[1005][1005];
queue<pair<int, int>> q;
pair<int, int> p, np;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifdef LOCAL
    ifstream fileIn("../input.txt");
    ofstream fileOut("../output.txt");
    cin.rdbuf(fileIn.rdbuf());
    cout.rdbuf(fileOut.rdbuf());
    #endif

    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                q.push(pair<int, int>(i, j));
                vis[i][j] = 1;
            }
        }
    }

    while (!q.empty()) {
        p = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            np = p;
            np.x += dx[k];
            np.y += dy[k];
            if (np.x < 0 || np.x >= n || np.y < 0 || np.y >= m) continue;
            if (vis[np.x][np.y] == 0 && arr[np.x][np.y] == 0) {
                vis[np.x][np.y] = vis[p.x][p.y] + 1;
                arr[np.x][np.y] = 1;
                q.push(np);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) res = res > vis[i][j] ? res : vis[i][j];
    }
    cout << res - 1;
    return 0;
}