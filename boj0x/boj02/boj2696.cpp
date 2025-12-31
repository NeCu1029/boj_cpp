#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

priority_queue<int, vector<int>, less<int>> q1;  // 작은 값이 들어감
priority_queue<int, vector<int>, greater<int>> q2;  // 큰 값이 들어감
int t, m, k, p, res[10000];

int main() {
    scanf("%d", &t);
    while (t--) {
        q1 = priority_queue<int, vector<int>, less<int>>();
        q2 = priority_queue<int, vector<int>, greater<int>>();
        scanf("%d", &m);

        for (int i = 0; i < m; i++) {
            scanf("%d", &k);
            if (i % 2) {
                q1.push(k);
                p = q1.top();
                q1.pop();
                q2.push(p);
            } else {
                q2.push(k);
                p = q2.top();
                q2.pop();
                q1.push(p);
                res[i / 2] = q1.top();
            }
        }

        printf("%d\n", (m + 1) / 2);
        for (int i = 0; i < (m + 1) / 2; i++) {
            if (i > 0 && i % 10 == 0) printf("\n");
            printf("%d ", res[i]);
        }
        if (t > 0) printf("\n");
    }
}