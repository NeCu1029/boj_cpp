#include <stdio.h>
#include <map>
#include <algorithm>

using namespace std;

int n, arr[55], sorted[55], vis[55], cnt, cur;
map<int, int> idx;

int main() {
    scanf("%d", &n);
    if (n == 1) {
        printf("1");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sorted[i] = arr[i];
    }

    sort(sorted, sorted + n);
    for (int i = 0; i < n; i++) {
        idx[sorted[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        cur = idx[arr[i]];
        if (cur == 0 && vis[1] == 0) cnt++;
        else if (cur == n - 1 && vis[n - 2] == 0) cnt++;
        else if (1 <= cur < n - 1 && vis[cur - 1] == 0 && vis[cur + 1] == 0) cnt++;
        vis[cur] = 1;
    }
    printf("%d", cnt);
    return 0;
}