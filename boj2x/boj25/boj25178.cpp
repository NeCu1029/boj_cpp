#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

int n, t1, t2;
char a[100005], b[100005], c[100005], d[100005], e[100005], f[100005];

int main() {
    scanf("%d", &n);
    scanf("%s %s", a, b);

    strcpy(c, a); strcpy(d, b);
    sort(c, c + n); sort(d, d + n);
    for (int i = 0; i < n; i++) {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
        e[t1++] = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u')
        f[t2++] = b[i];
    }

    if (a[0] == b[0] && a[n - 1] == b[n - 1] && strcmp(c, d) == 0 && strcmp(e, f) == 0)
    printf("YES");
    else printf("NO");
    return 0;
}