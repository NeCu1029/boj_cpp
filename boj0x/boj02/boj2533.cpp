#include <stdio.h>
#include <vector>

using namespace std;

int n, u, v, deg[1000005], par[1000005], dp[1000005][2];
vector<int> graph[1000005];

int dfs(int x, int k) {
    if (dp[x][k] >= 0) return dp[x][k];

    int res = k, nx;
    for (int i = 0; i < deg[x]; i++) {
        nx = graph[x][i];
        if (par[x] == nx) continue;
        par[nx] = x;
        if (k) res += min(dfs(nx, 0), dfs(nx, 1));
        else res += dfs(nx, 1);
    }

    return dp[x][k] = res;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    for (int i = 1; i <= n; i++) {
        dp[i][0] = -1;
        dp[i][1] = -1;
    }

    printf("%d", min(dfs(1, 0), dfs(1, 1)));
    return 0;
}