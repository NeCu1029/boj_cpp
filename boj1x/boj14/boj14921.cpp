#include <stdio.h>
#include <math.h>

using namespace std;

int n, arr[100005], l, r, cur, res = 2147483647;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    l = 0; r = n - 1;
    while (l < r) {
        if (abs(arr[l] + arr[r]) < abs(res)) res = arr[l] + arr[r];
        if (arr[l] + arr[r] < 0) l++;
        else r--;
    }
    printf("%d", res);
    return 0;
}