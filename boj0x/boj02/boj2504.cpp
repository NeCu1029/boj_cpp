#include <stdio.h>
#include <string.h>
#include <algorithm>
#define ll long long

using namespace std;

int n, chk[35][35];
ll dp[35][35];
char s[35];

ll f(int x, int y) {
    if (x >= y) return 0;
    if (chk[x][y]) return dp[x][y];
    chk[x][y] = 1;
    if (x + 1 == y) {
        if (s[x] == '(' && s[y] == ')') return dp[x][y] = 2;
        if (s[x] == '[' && s[y] == ']') return dp[x][y] = 3;
        return dp[x][y] = 0;
    }

    ll res = 0, t1, t2;
    if (s[x] == '(' && s[y] == ')') res = max(res, 2 * f(x + 1, y - 1));
    if (s[x] == '[' && s[y] == ']') res = max(res, 3 * f(x + 1, y - 1));
    for (int i = x + 1; i < y - 1; i++) {
        t1 = f(x, i);
        t2 = f(i + 1, y);
        if (t1 && t2) res = max(res, t1 + t2);
    }
    return dp[x][y] = res;
}

int main() {
    scanf("%s", s);
    n = strlen(s);
    printf("%lld", f(0, n - 1));
    return 0;
}