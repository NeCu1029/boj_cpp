#include <stdio.h>
#include <deque>

using namespace std;

int t, k, x, d, v, res, rot[1005];
char s[10];
deque<int> gear[1005];

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", s);
        for (int j = 0; j < 8; j++) {
            if (s[j] == '0') gear[i].push_back(0);
            else gear[i].push_back(1);
        }
    }
    scanf("%d", &k);

    while (k--) {
        for (int i = 0; i < t; i++) rot[i] = 0;
        scanf("%d %d", &x, &d);
        rot[--x] = d;
        for (int i = x - 1; i >= 0; i--) {
            if (gear[i][2] == gear[i + 1][6]) break;
            rot[i] = -rot[i + 1];
        }
        for (int i = x + 1; i < t; i++) {
            if (gear[i][6] == gear[i - 1][2]) break;
            rot[i] = -rot[i - 1];
        }
        for (int i = 0; i < t; i++) {
            if (rot[i] == -1) {
                v = gear[i].front();
                gear[i].pop_front();
                gear[i].push_back(v);
            } else if (rot[i] == 1) {
                v = gear[i].back();
                gear[i].pop_back();
                gear[i].push_front(v);
            }
        }
    }

    for (int i = 0; i < t; i++) res += gear[i][0];
    printf("%d", res);
    return 0;
}