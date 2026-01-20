#include <stdio.h>
#include <queue>
#include <map>
#define int long long

using namespace std;

int a, b, c, d;
pair<int, int> des, p, nxt[10];
queue<pair<int, int>> q;
map<pair<int, int>, int> vis;

signed main() {
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (c == 0 && d == 0) {
        printf("0");
        return 0;
    }
    des = {c, d};
    q.push({0, 0});
    vis.insert({{0, 0}, 1});

    while (!q.empty()) {
        p = q.front();
        q.pop();
        nxt[0] = {a, p.second};
        nxt[1] = {p.first, b};
        nxt[2] = {0, p.second};
        nxt[3] = {p.first, 0};
        nxt[4] = {min(p.first + p.second, a), p.first + p.second - min(p.first + p.second, a)};
        nxt[5] = {p.first + p.second - min(p.first + p.second, b), min(p.first + p.second, b)};

        for (int i = 0; i < 6; i++) {
            if (nxt[i] == des) {
                printf("%lld", vis[p]);
                return 0;
            }
            if (vis.find(nxt[i]) == vis.end()) {
                vis[nxt[i]] = vis[p] + 1;
                q.push({nxt[i]});
            }
        }
    }

    printf("-1");
    return 0;
}