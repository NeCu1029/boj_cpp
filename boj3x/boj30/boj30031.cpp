#include <stdio.h>

int n, a, b, s;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        switch (a) {
            case 136:
                s += 1000;
                break;
            case 142:
                s += 5000;
                break;
            case 148:
                s += 10000;
                break;
            case 154:
                s += 50000;
                break;
        }
    }
    printf("%d", s);
    return 0;
}