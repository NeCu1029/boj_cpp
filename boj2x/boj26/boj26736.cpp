#include <stdio.h>

int a, b;
char c;

int main() {
    while (true) {
        scanf("%c", &c);
        if (c == 'A') a++;
        else if (c == 'B') b++;
        else break;
    }
    printf("%d : %d", a, b);
    return 0;
}