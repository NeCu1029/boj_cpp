#include <stdio.h>
#include <vector>

using namespace std;

int n, x;
vector<int> st;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        while (!st.empty()) {
            if (st.back() <= x) st.pop_back();
            else break;
        }
        st.push_back(x);
    }
    printf("%d", st.size());
    return 0;
}