#include <stdio.h>
#include <vector>

using namespace std;

int n, r, q, u, v, edge[100005], par[100005], dp[100005];
vector<int> graph[100005];

int dfs(int x) {
    int nx, res = 0;
    for (int i = 0; i < edge[x]; i++) {
        nx = graph[x][i];
        if (par[nx]) continue;
        par[nx] = x;
        res += dfs(nx);
    }
    return dp[x] = res + 1;
}

int main() {
    scanf("%d %d %d", &n, &r, &q);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
        edge[u]++;
        edge[v]++;
    }
    par[r] = -1;
    dfs(r);

    for (int i = 0; i < q; i++) {
        scanf("%d", &v);
        printf("%d\n", dp[v]);
    }
    return 0;
}