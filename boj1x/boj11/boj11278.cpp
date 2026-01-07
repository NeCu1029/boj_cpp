#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, p1, p2, x1, x2, cl[105][2];
bool flag;

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) scanf("%d %d", &cl[i][0], &cl[i][1]);

    for (int bm = 0; bm < (1 << n); bm++) {
        flag = true;
        for (int i = 0; i < m; i++) {
            p1 = abs(cl[i][0]) - 1; p2 = abs(cl[i][1]) - 1;
            x1 = (bm & (1 << p1)) >> p1; x2 = (bm & (1 << p2)) >> p2;
            if (cl[i][0] < 0) x1 = !x1;
            if (cl[i][1] < 0) x2 = !x2;
            if (!(x1 | x2)) {
                flag = false;
                break;
            }
        }
        if (flag) {
            printf("1\n");
            for (int i = 0; i < n; i++) printf("%d ", (bm & (1 << i)) >> i);
            return 0;
        }
    }

    printf("0");
    return 0;
}