#include <stdio.h>
#include <algorithm>
#include <map>

using namespace std;

int n, c, a[1005];
map<int, int> occ, fir;

bool cmp(int x, int y) {
    if (occ[x] != occ[y]) return occ[x] > occ[y];
    else return fir[x] < fir[y];
}

int main() {
    scanf("%d %d", &n, &c);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (occ.find(a[i]) == occ.end()) {
            occ[a[i]] = 1;
            fir[a[i]] = i;
        } else occ[a[i]]++;
    }

    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}