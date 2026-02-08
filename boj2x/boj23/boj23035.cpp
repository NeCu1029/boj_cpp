#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, t, r, c, cnt, l;
pair<int, int> arr[1000005], lis[1000005];

int main() {
    scanf("%d %d %d", &n, &m, &t);
    while (t--) {
        scanf("%d %d", &r, &c);
        if (r <= n && c <= m) arr[cnt++] = {r, c};
    }
    sort(arr, arr + cnt);

    for (int i = 0; i < cnt; i++) {
        arr[i] = {arr[i].second, arr[i].first};
        if (l == 0) lis[l++] = arr[i];
        else if (lis[l - 1] < arr[i]) lis[l++] = arr[i];
        else lis[lower_bound(lis, lis + l, arr[i]) - lis] = arr[i];
    }
    printf("%d", l);
    return 0;
}