#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int n, pl[55][9], base[3], score, cur, out, res;
vector<int> order = {0, 1, 2, 3, 4, 5, 6, 7, 8};

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 9; j++) scanf("%d", &pl[i][j]);
    }

    do {
        if (order[3]) continue;

        score = 0; cur = 0;
        for (int i = 0; i < n; i++) {
            base[0] = 0; base[1] = 0; base[2] = 0; out = 0;
            while (true) {
                switch (pl[i][order[cur]]) {
                    case 0:
                        out++;
                        break;
                    case 1:
                        if (base[2]) {base[2] = 0; score++;}
                        if (base[1]) {base[1] = 0; base[2] = 1;}
                        if (base[0]) {base[0] = 0; base[1] = 1;}
                        base[0] = 1;
                        break;
                    case 2:
                        if (base[2]) {base[2] = 0; score++;}
                        if (base[1]) {base[1] = 0; score++;}
                        if (base[0]) {base[0] = 0; base[2] = 1;}
                        base[1] = 1;
                        break;
                    case 3:
                        if (base[2]) {base[2] = 0; score++;}
                        if (base[1]) {base[1] = 0; score++;}
                        if (base[0]) {base[0] = 0; score++;}
                        base[2] = 1;
                        break;
                    case 4:
                        if (base[2]) {base[2] = 0; score++;}
                        if (base[1]) {base[1] = 0; score++;}
                        if (base[0]) {base[0] = 0; score++;}
                        score++;
                        break;
                }

                cur = (cur + 1) % 9;
                if (out == 3) break;
            }
        }

        res = max(res, score);
    } while (next_permutation(order.begin(), order.end()));

    printf("%d", res);
    return 0;
}