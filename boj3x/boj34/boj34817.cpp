#include <stdio.h>
#include <queue>

using namespace std;

int n, k, a;
priority_queue<int> q;

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (q.empty()) q.push(a);
        else if (a + k >= q.top()) q.push(a);
        else {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}