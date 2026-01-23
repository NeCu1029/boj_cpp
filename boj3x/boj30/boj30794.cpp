#include <stdio.h>

int n, m;
char s[100];

int main() {
    scanf("%d %s", &n, s);
    switch (s[0]) {
        case 'p': m += 2;
        case 'g': m++;
        case 'c': m++;
        case 'b': m++;
    }
    printf("%d", n * m * 200);
    return 0;
}