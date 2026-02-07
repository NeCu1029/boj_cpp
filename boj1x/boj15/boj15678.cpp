#include <stdio.h>
#include <deque>
#include <utility>
#define ll long long

using namespace std;

int n, d;
ll k, bef, res = -(1ll << 60);
deque<pair<int, ll>> q;

int main() {
    scanf("%d %d", &n, &d);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &k);
        if (q.empty()) bef = 0;
        else bef = q[0].second > 0 ? q[0].second : 0;
        res = res > bef + k ? res : bef + k;

        while (!q.empty()) {
            if (q[q.size() - 1].second > bef + k) break;
            q.pop_back();
        }
        q.push_back(pair<int, ll>(i, bef + k));
        while (q[0].first <= i - d) q.pop_front();
    }

    printf("%lld", res);
    return 0;
}