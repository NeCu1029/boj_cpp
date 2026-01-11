#include <stdio.h>

char s[9][13] = {" @@@   @@@ ",
    "@   @ @   @",
    "@    @    @",
    "@         @",
    " @       @ ",
    "  @     @  ",
    "   @   @   ",
    "    @ @    ",
    "     @     ",
};
int n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < n; j++) {
            printf("%s", s[i]);
            if (j < n - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}