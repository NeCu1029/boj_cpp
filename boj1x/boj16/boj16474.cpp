#include <stdio.h>
#include <algorithm>
#include <map>

using namespace std;

int n, m, a, b, k, l, lis[200005];
map<int, int> x, y;
pair<int, int> arr[200005];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        x[a] = i;
    }
    for (int i = 1; i <= m; i++) {
        scanf("%d", &b);
        y[b] = i;
    }

    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d %d", &a, &b);
        arr[i] = {x[a], -y[b]};
    }
    sort(arr, arr + k);
    for (int i = 0; i < k; i++) {
        if (l == 0) lis[l++] = -arr[i].second;
        else if (lis[l - 1] < -arr[i].second) lis[l++] = -arr[i].second;
        else lis[lower_bound(lis, lis + l, -arr[i].second) - lis] = -arr[i].second;
    }
    printf("%d", k - l);
    return 0;
}