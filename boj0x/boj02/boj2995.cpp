#include <stdio.h>
#include <algorithm>

using namespace std;

int n, a, b, l, t, lds[100005], dp[100005];
pair<int, int> arr[100005], res[100005];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        arr[i] = {a, -b};
    }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        if (l == 0) {
            dp[l++] = arr[i].second;
            lds[i] = l;
        }
        else if (dp[l - 1] <= arr[i].second) {
            dp[l++] = arr[i].second;
            lds[i] = l;
        }
        else {
            lds[i] = upper_bound(dp, dp + l, arr[i].second) - dp + 1;
            dp[lds[i] - 1] = arr[i].second;
        }
    }

    t = l;
    for (int i = n - 1; i >= 0; i--) {
        if (lds[i] == t) res[t--] = arr[i];
    }
    printf("%d\n", l);
    for (int i = 1; i <= l; i++) printf("%d %d\n", res[i].first, -res[i].second);
    return 0;
}