#include <stdio.h>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int n, c, arr[300005], m, a, b, x, cnt, flag;
vector<int> idx[10005];
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> dis;

int main() {
    scanf("%d %d", &n, &c);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        if(idx[arr[i]].empty()) idx[arr[i]].push_back(-1);
        idx[arr[i]].push_back(i);
    }
    scanf("%d", &m);

    while (m--) {
        scanf("%d %d", &a, &b);
        dis = uniform_int_distribution<int>(a, b);
        flag = 1;
        for (int i = 0; i < 50; i++) {
            x = arr[dis(gen)];
            cnt = upper_bound(idx[x].begin(), idx[x].end(), b) - lower_bound(idx[x].begin(), idx[x].end(), a);
            if (cnt > (b - a + 1) / 2) {
                printf("yes %d\n", x);
                flag = 0;
                break;
            }
        }
        if (flag) printf("no\n");
    }
    return 0;
}