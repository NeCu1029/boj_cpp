#include <stdio.h>
#include <algorithm>

using namespace std;

int n, arr[1005], res;

int main() {
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        scanf("%d %d", &arr[0], &arr[1]);
        for (int i = 2; i < n; i++) {
            scanf("%d", &arr[i]);
            res = max(res, arr[i - 2] + arr[i - 1] + arr[i]);
        }
        printf("%d\n", res);
        res = 0;
    }
    return 0;
}