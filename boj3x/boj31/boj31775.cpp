#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s[3];

int main() {
    cin >> s[0] >> s[1] >> s[2];
    sort(s, s + 3);
    if (s[0][0] == 'k' && s[1][0] == 'l' && s[2][0] == 'p') cout << "GLOBAL";
    else cout << "PONIX";
    return 0;
}