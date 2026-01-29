#include <stdio.h>
#include <algorithm>

using namespace std;

int n, a[200005], s[200005], res;
long long int t1, t2;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s[i] = a[i];
    }
    sort(s, s + n);

    for (int i = 0; i < n - 1; i++) {
        t1 += a[i];
        t2 += s[i];
        if (t1 != t2) res += s[i + 1] - s[i];
    }
    printf("%d", res);
    return 0;
}