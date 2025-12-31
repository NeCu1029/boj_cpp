#include <iostream>
#include <map>
#define ll long long

using namespace std;

int n, k, x, q, l, r;
ll arr[1000005];
map<int, int> s;

int main() {
    scanf("%d %d", &n, &k);
    while (k--) {
        scanf("%d", &x);
        if (s.find(x) == s.end()) s[x] = 1;
        else s[x]++;
    }
    for (auto it = s.begin(); it != s.end(); it++) {
        for (int i = 0; i < n; i += (it->first)) arr[i] += (ll) (it->second);
    }
    for (int i = 1; i < n; i++) arr[i] += arr[i - 1];

    scanf("%d", &q);
    while (q--) {
        scanf("%d %d", &l, &r);
        if (l == 0) printf("%lld\n", arr[r]);
        else printf("%lld\n", arr[r] - arr[l - 1]);
    }
    return 0;
}