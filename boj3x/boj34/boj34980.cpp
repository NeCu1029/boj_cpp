#include <stdio.h>

int n, a, b, flag;
char s[155], t[155];

int main() {
    scanf("%d", &n);
    scanf("%s", s);
    scanf("%s", t);
    for (int i = 0; i < n; i++) {
        a += s[i] == 'w';
        b += t[i] == 'w';
        flag += s[i] != t[i];
    }

    if (a > b) printf("Oryang");
    else if (a < b) printf("Manners maketh man");
    else if (flag) printf("Its fine");
    else printf("Good");
    return 0;
}