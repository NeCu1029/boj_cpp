#include <stdio.h>
#include <map>

using namespace std;

int n, x, st = 1 << 30;
long long int t, k;
map<int, long long int> s;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &t);
        k = t; x = 0;
        while (k % 2 == 0) {
            x++;
            k /= 2;
        }
        while (k % 3 == 0) {
            x--;
            k /= 3;
        }
        s[x] = t;
        st = x < st ? x : st;
    }
    for (int i = st; i < st + n; i++) printf("%lld ", s[i]);
    return 0;
}