#include <stdio.h>
#include <queue>
#include <vector>
#define ll long long

using namespace std;

int n, k, sm[4];
priority_queue<int, vector<int>, greater<>> pq1;
priority_queue<ll, vector<ll>, greater<>> pq2;

ll digits(int x) {
    ll res = 1;
    while (x) {
        x /= 10;
        res *= 10;
    }
    return res;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        pq1.push(k);
    }

    for (int i = 0; i < 4 && i < n; i++) {
        sm[i] = pq1.top();
        pq1.pop();
    }

    for (int i = 0; i < 4 && i < n; i++) {
        for (int j = 0; j < 4 && j < n; j++) {
            if (i != j) pq2.push((ll) sm[i] * digits(sm[j]) + (ll) sm[j]);
        }
    }
    pq2.pop();
    pq2.pop();
    printf("%lld", pq2.top());
    return 0;
}