#include <stdio.h>
#include <unordered_set>

using namespace std;

int n, a, res;
unordered_set<int> one, two;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        for (int i: one) {
            if (two.find(a - i) != two.end()) {
                res++;
                break;
            }
        }
        one.insert(a);
        for (int i: one) two.insert(i + a);
    }
    printf("%d", res);
    return 0;
}