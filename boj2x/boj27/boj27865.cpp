#include <stdio.h>

int n;
char s[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < 20000; i++) {
        printf("? 1\n");
        fflush(stdout);
        scanf("%s", s);
        if (s[0] == 'Y') {
            printf("! 1\n");
            fflush(stdout);
            return 0;
        }
    }
}