#include <stdio.h>
#include <vector>

using namespace std;

int n, a, b;
bool vis[500005];
long long int res;
vector<int> graph[500005];

void dfs(int x, int d) {
    vis[x] = true;
    bool flag = true;
    for (int y: graph[x]) {
        if (vis[y]) continue;
        flag = false;
        dfs(y, d + 1);
    }
    if (flag) res += d;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d %d", &a, &b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1, 0);
    if (res % 2) printf("Yes");
    else printf("No");
    return 0;
}