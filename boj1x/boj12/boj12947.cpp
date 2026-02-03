#include <stdio.h>
#include <vector>

using namespace std;

int n, arr[55], rb, bel[55], res;
vector<int> root = {0};

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 1) {
            bel[rb] = i - rb - 1;
            root.push_back(i);
            rb = i;
        }
    }
    bel[rb] = n - rb;
    for (int i: root) res = res > n - i + bel[i] ? res : n - i + bel[i];
    printf("%d", res);
    return 0;
}