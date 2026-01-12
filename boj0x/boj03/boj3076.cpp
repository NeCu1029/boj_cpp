#include <stdio.h>

int r, c, a, b;

int main() {
    scanf("%d %d", &r, &c);
    scanf("%d %d", &a, &b);
    
    for (int i = 0; i < r * a; i++) {
        for (int j = 0; j < c * b; j++) {
            if ((i / a) % 2 == (j / b) % 2) printf("X");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}