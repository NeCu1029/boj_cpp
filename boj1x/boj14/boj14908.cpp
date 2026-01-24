#include <stdio.h>
#include <algorithm>

using namespace std;

int n, t, s;
pair<double, int> p[1005];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &t, &s);
        p[i] = {(double) t / s, i + 1};
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++) printf("%d ", p[i].second);
    return 0;
}