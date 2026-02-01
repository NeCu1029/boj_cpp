#include <stdio.h>

int m, fr[1005];
long long int k;
char s[100];

int main() {
    scanf("%d", &m);
    while (scanf("%s", s) != EOF) {
        k = 0;
        for (int i = 2; i < 8; i++) {
            k *= 10;
            if (s[i]) k += s[i] - '0';
        }
        k *= m;
        fr[k / 1000000]++;
    }

    for (int i = 0; i < m; i++) printf("%d ", fr[i]);
    return 0;
}