#include <stdio.h>
#include <string.h>

int n;
char s[50005];
long long int cnt, res;

int main() {
    scanf("%s", s);
    n = strlen(s);
    if (n == 1) {
        printf("0");
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (s[i - 1] == '(' && s[i] == '(') cnt++;
        if (s[i - 1] == ')' && s[i] == ')') res += cnt;
    }
    printf("%lld", res);
    return 0;
}