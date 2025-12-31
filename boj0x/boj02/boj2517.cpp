#include <stdio.h>
#include <algorithm>
#include <unordered_map>
#define MAXL 600000

using namespace std;

int n, v, arr[500005], sorted[500005], tree[2 * MAXL];

void update(int p, int val) {
	for (tree[p += MAXL] = val; p > 1; p >>= 1) tree[p >> 1] = tree[p] + tree[p ^ 1];
}

int query(int l, int r) {
	int res = 0;
    l += MAXL;
    r += MAXL;
	for (; l < r; l >>= 1, r >>= 1) {
		if (l & 1) res += tree[l++];
		if (r & 1) res += tree[--r];
	}
	return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sorted[i] = arr[i];
    }
    sort(sorted, sorted + n);

    for (int i = 0; i < n; i++) {
        v = lower_bound(sorted, sorted + n, arr[i]) - sorted + 2;
        printf("%d\n", query(v + 1, n + 5) + 1);
        update(v, 1);
    }
    return 0;
}