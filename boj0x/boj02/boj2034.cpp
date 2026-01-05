#include <stdio.h>

int note[12] = {0, -1, 1, 2, -1, 3, -1, 4, 5, -1, 6, -1};
int white[7] = {0, 2, 3, 5, 7, 8, 10};
int n, t, arr[10005];
bool flag;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 7; i++) {
        t = white[i] + 12000000;
        flag = true;
        for (int j = 0; j < n; j++) {
            t += arr[j];
            if (note[t % 12] < 0) flag = false;
        }
        if (flag) printf("%c %c\n", 65 + i, 65 + note[t % 12]);
    }

    return 0;
}