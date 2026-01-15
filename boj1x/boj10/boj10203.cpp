#include <iostream>
#include <string>

using namespace std;

int t, n, cnt;
string s;

int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        n = s.length();
        cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a') cnt++;
            if (s[i] == 'e') cnt++;
            if (s[i] == 'i') cnt++;
            if (s[i] == 'o') cnt++;
            if (s[i] == 'u') cnt++;
        }
        cout << "The number of vowels in " << s << " is " << cnt << ".\n";
    }
    return 0;
}