#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, arr[15005], l, r, res;

int main() {
    scanf("%d", &n);
    scanf("%d", &m);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, arr + n);
    l = 0; r = n - 1;

    while (l < r) {
        if (arr[l] + arr[r] == m) res++;
        if (arr[l] + arr[r] < m) l++;
        else r--;
    }
    printf("%d", res);
    return 0;
}