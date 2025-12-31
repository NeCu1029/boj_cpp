#include <stdio.h>
#include <vector>

using namespace std;

int n, m, k, u, ju[100005], res[100005];
vector<int> tree[100005];

void dfs(int x) {
    int nx;
    for (int i = 0; i < ju[x]; i++) {
        nx = tree[x][i];
        res[nx] += res[x];
        dfs(nx);
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &k);
        if (i == 1) continue;
        tree[k].push_back(i);
        ju[k]++;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &k, &u);
        res[k] += u;
    }

    dfs(1);
    for (int i = 1; i <= n; i++) printf("%d ", res[i]);
    return 0;
}