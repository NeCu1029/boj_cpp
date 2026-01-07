#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int t, n, m, a, b, cnt, res, scc[100005], ind[100005];
bool vis[100005];
vector<int> graph[100005], graph2[100005], stack;

void dfs(int x) {
    for (int nx: graph[x]) {
        if (vis[nx]) continue;
        vis[nx] = true;
        dfs(nx);
    }
    stack.push_back(x);
}

void dfs2(int x, int k) {
    for (int nx: graph2[x]) {
        if (scc[nx]) continue;
        scc[nx] = k;
        dfs2(nx, k);
    }
}

bool cmp(vector<int> x, vector<int> y) {
    return x[0] < y[0];
}

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        while (m--) {
            scanf("%d %d", &a, &b);
            graph[a].push_back(b);
            graph2[b].push_back(a);
        }

        for (int i = 1; i <= n; i++) {
            if (vis[i]) continue;
            vis[i] = true;
            dfs(i);
        }
        while (!stack.empty()) {
            a = stack.back();
            stack.pop_back();
            if (scc[a]) continue;
            scc[a] = ++cnt;
            dfs2(a, cnt);
        }
        for (int i = 1; i <= n; i++) {
            for (int k: graph[i]) {
                if (scc[i] != scc[k]) ind[scc[k]]++;
            }
            graph[i] = vector<int>();
            graph2[i] = vector<int>();
            vis[i] = 0;
        }
        for (int i = 1; i <= cnt; i++) {
            if (ind[i] == 0) res++;
            ind[i] = 0;
        }

        printf("%d\n", res);
        for (int i = 1; i <= n; i++) scc[i] = 0;
        cnt = 0; res = 0;
    }
}