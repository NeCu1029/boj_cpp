#include <stdio.h>
#include <unordered_map>

using namespace std;

int n, m;
long long int t, a[1005], b[1005], v, res;
unordered_map<long long int, long long int> sa, sb;

int main() {
    scanf("%lld", &t);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        scanf("%lld", &b[i]);
        b[i] += b[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            v = a[j] - a[i - 1];
            if (sa.find(v) != sa.end()) sa[v]++;
            else sa[v] = 1;
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = i; j <= m; j++) {
            v = b[j] - b[i - 1];
            if (sb.find(v) != sb.end()) sb[v]++;
            else sb[v] = 1;
        }
    }

    for (auto &pair: sa) {
        v = pair.first;
        if (sb.find(t - v) != sb.end()) res += pair.second * sb[t - v];
    }
    printf("%lld", res);
    return 0;
}