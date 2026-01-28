#include <stdio.h>
#include <unordered_map>
#define ll long long

using namespace std;

int n, s, a1[25], a2[25], cur;
ll res;
unordered_map<int, ll> p;

int main() {
    scanf("%d %d", &n, &s);
    for (int i = 0; i < n / 2; i++) scanf("%d", &a1[i]);
    for (int i = 0; i < n - n / 2; i++) scanf("%d", &a2[i]);

    for (int i = 0; i < (1 << (n / 2)); i++) {
        cur = 0;
        for (int j = 0; j < n / 2; j++) {
            if (i & (1 << j)) cur += a1[j];
        }
        if (p.find(cur) != p.end()) p[cur]++;
        else p[cur] = 1;
    }
    for (int i = 0; i < (1 << (n - n / 2)); i++) {
        cur = 0;
        for (int j = 0; j < n - n / 2; j++) {
            if (i & (1 << j)) cur += a2[j];
        }
        if (p.find(s - cur) != p.end()) res += p[s - cur];
    }
    
    printf("%lld", res - (s == 0));
    return 0;
}