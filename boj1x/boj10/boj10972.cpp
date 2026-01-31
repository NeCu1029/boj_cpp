#include <stdio.h>
#include <algorithm>

using namespace std;

int n, arr[10005];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    if (next_permutation(arr, arr + n)) {
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    } else printf("-1");
    return 0;
}