#include <algorithm>

using namespace std;

int n, arr[10005], l, lis[10005];

int main() {
    for (int i = 0; i < n; i++) {
        if (l == 0) lis[l++] = arr[i];
        else if (lis[l - 1] < arr[i]) lis[l++] = arr[i];
        else lis[lower_bound(lis, lis + l, arr[i]) - lis] = arr[i];
    }
    return 0;
}