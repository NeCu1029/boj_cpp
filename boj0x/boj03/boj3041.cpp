#include <stdio.h>
#include <algorithm>

using namespace std;

int res, x;
char s[4];

int main() {
    for (int i = 0; i < 4; i++) {
        scanf("%s", s);
        for (int j = 0; j < 4; j++) {
            if (s[j] == '.') continue;
            x = (int) s[j] - 65;
            res += abs(x / 4 - i) + abs(x % 4 - j);
        }
    }
    printf("%d", res);
    return 0;
}