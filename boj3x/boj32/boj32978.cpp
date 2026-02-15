#include <iostream>
#include <string>
#include <set>

using namespace std;

int n;
string m;
set<string> s;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        s.insert(m);
    }
    for (int i = 1; i < n; i++) {
        cin >> m;
        s.erase(m);
    }
    for (string res: s) cout << res;
    return 0;
}