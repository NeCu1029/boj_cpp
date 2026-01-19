#include <stdio.h>
#include <deque>

using namespace std;

int k, x, d, v, res, rot[4];
char s[10];
deque<int> gear[4];

int main() {
    for (int i = 0; i < 4; i++) {
        scanf("%s", s);
        for (int j = 0; j < 8; j++) {
            if (s[j] == '0') gear[i].push_back(0);
            else gear[i].push_back(1);
        }
    }
    scanf("%d", &k);

    while (k--) {
        rot[0] = 0; rot[1] = 0; rot[2] = 0; rot[3] = 0;
        scanf("%d %d", &x, &d);
        rot[--x] = d;
        for (int i = x - 1; i >= 0; i--) {
            if (gear[i][2] == gear[i + 1][6]) break;
            rot[i] = -rot[i + 1];
        }
        for (int i = x + 1; i < 4; i++) {
            if (gear[i][6] == gear[i - 1][2]) break;
            rot[i] = -rot[i - 1];
        }
        for (int i = 0; i < 4; i++) {
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

    for (int i = 0; i < 4; i++) res += (gear[i][0] << i);
    printf("%d", res);
    return 0;
}