#include <iostream>
#include <string>

using namespace std;

int t, n;
string dp[1005], ord = "(){}[]";

void change(string s, int i) {
    if (s.size() < dp[i].size()) dp[i] = s;
    else if (s.size() == dp[i].size()) {
        int x1, x2;
        for (int k = 0; k < s.size(); k++) {
            x1 = ord.find(s[k]);
            x2 = ord.find(dp[i][k]);
            if (x1 < x2) dp[i] = s;
            if (x1 != x2) break;
        }
    }
}

int main() {
    dp[1] = "()"; dp[2] = "{}"; dp[3] = "[]";
    for (int i = 4; i <= 1000; i++) {
        for (int j = 0; j < i; j++) dp[i] += "()";
        if (i % 2 == 0) change("(" + dp[i / 2] + ")", i);
        if (i % 3 == 0) change("{" + dp[i / 3] + "}", i);
        if (i % 5 == 0) change("[" + dp[i / 5] + "]", i);
        for (int j = 1; j < i; j++) change(dp[j] + dp[i - j], i);
    }

    cin >> t;
    while (t--) {
        cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}