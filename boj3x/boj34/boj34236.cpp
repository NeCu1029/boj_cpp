#include <stdio.h>

int n, d, arr[105];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    d = arr[1] - arr[0];
    printf("%d", arr[n - 1] + d);
}