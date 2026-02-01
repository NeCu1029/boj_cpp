#include <stdio.h>

char c[5];
int n, r, b, g, y, num[10], mn;

bool color_same() {
    return r == 5 || b == 5 || g == 5 || y == 5;
}

bool cont() {
    if (mn < 5) return false;
    return num[mn - 4] && num[mn - 3] && num[mn - 2] && num[mn - 1] && num[mn];
}

int freq(int x, int y) {
    for (int i = y; i <= 9; i++) {
        if (num[i] == x) return i;
    }
    return 0;
}

int main() {
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", c, &n);
        switch (c[0]) {
            case 'R': r++; break;
            case 'B': b++; break;
            case 'G': g++; break;
            default: y++;
        }
        num[n]++;
        mn = mn > n ? mn : n;
    }

    if (color_same() && cont()) printf("%d", 900 + mn);
    else if (freq(4, 1)) printf("%d", 800 + freq(4, 1));
    else if (freq(3, 1) && freq(2, 1)) printf("%d", 700 + 10 * freq(3, 1) + freq(2, 1));
    else if (color_same()) printf("%d", 600 + mn);
    else if (cont()) printf("%d", 500 + mn);
    else if (freq(3, 1)) printf("%d", 400 + freq(3, 1));
    else if (freq(2, 1) && freq(2, freq(2, 1) + 1)) printf("%d", 300 + 10 * freq(2, freq(2, 1) + 1) + freq(2, 1));
    else if (freq(2, 1)) printf("%d", 200 + freq(2, 1));
    else printf("%d", 100 + mn);
    return 0;
}