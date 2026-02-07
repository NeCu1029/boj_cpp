#include <stdio.h>
#include <algorithm>
#include <unordered_map>

using namespace std;

int n, a, b, val, l, lis[100005];
unordered_map<int, int> s;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a);
        s[a] = i;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b);
        val = s[b];
        if (l == 0) lis[l++] = val;
        else if (lis[l - 1] < val) lis[l++] = val;
        else lis[lower_bound(lis, lis + l, val) - lis] = val;
    }
    printf("%d", l);
    return 0;
}