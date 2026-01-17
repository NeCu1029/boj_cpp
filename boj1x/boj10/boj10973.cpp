#include <stdio.h>
#include <algorithm>

using namespace std;

int n, arr[10005];
bool k;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arr[i] *= -1;
    }

    k = next_permutation(arr, arr + n);
    if (k) {
        for (int i = 0; i < n; i++) printf("%d ", -arr[i]);
    } else printf("-1");
    return 0;
}