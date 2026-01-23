#include <stdio.h>
#include <algorithm>

using namespace std;

int n, m, k, a, b, c, x;

int main() {
    scanf("%d %d %d %d %d %d", &n, &m, &k, &a, &b, &c);
    x = max(max(n * a, m * b), k * c);
    if (n * a == x) printf("Joffrey ");
    if (m * b == x) printf("Robb ");
    if (k * c == x) printf("Stannis ");
    return 0;
}