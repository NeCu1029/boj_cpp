#include <stdio.h>
#include <deque>

using namespace std;

char s[1000005], a, b;
int cnt, x, i;
deque<char> q;

int main() {
    scanf("%s", s);
    for (cnt = 0; s[cnt]; cnt++) q.push_back(s[cnt]);
    q.push_back((char) 0);

    while (true) {
        i = 0;
        while (x = q.front()) {
            i++;
            q.pop_front();
            if (i % 3) q.push_back(x);
            else cnt--;
        }
        if (cnt <= 2) break;

        i = 0;
        while (x = q.back()) {
            i++;
            q.pop_back();
            if (i % 3) q.push_front(x);
            else cnt--;
        }
        if (cnt <= 2) break;
    }

    a = max(q[0], max(q[1], q[2]));
    b = (char) ((int) q[0] + (int) q[1] + (int) q[2] - (int) a);
    if (a > b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    printf("%c%c", a, b);
    return 0;
}