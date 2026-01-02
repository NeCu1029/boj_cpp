#include <stdio.h>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int n, m, k, a, b, v, nv, gn, vn, cs;
int c[30005], deg[30005], vis[30005], dp[30005][3005];
vector<int> graph[30005];
queue<int> q;
pair<int, int> group[30005];

int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; i++) scanf("%d", &c[i]);
    while (m--) {
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
        deg[a]++; deg[b]++;
    }

    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        vis[i] = 1;
        q.push(i);
        gn++; vn = 1; cs = c[i];

        while (!q.empty()) {
            v = q.front();
            q.pop();
            for (int j = 0; j < deg[v]; j++) {
                nv = graph[v][j];
                if (vis[nv]) continue;
                vis[nv] = 1;
                vn++; cs += c[nv];
                q.push(nv);
            }
        }
        group[gn] = {vn, cs};
    }

    for (int i = 1; i <= gn; i++) {
        for (int j = 1; j < k; j++) {
            if (group[i].first > j) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - group[i].first] + group[i].second);
        }
    }
    printf("%d", dp[gn][k - 1]);
    return 0;
}