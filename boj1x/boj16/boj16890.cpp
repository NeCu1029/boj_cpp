#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int n, sf, sb, tf, tb, l, r;
char a[300005], b[300005], res[300005];

int main() {
    scanf("%s", a);
    scanf("%s", b);
    n = strlen(a);
    sf = 0; sb = (n - 1) / 2;
    tf = (n + 1) / 2; tb = n - 1;
    l = 0; r = n - 1;
    sort(a, a + n);
    sort(b, b + n);

    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            if (a[sf] < b[tb]) res[l++] = a[sf++];
            else res[r--] = a[sb--];
        }  else {
            if (a[sf] < b[tb]) res[l++] = b[tb--];
            else res[r--] = b[tf++];
        }
    }

    printf("%s", res);
    return 0;
}