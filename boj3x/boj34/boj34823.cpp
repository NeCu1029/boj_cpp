#include <stdio.h>
#include <algorithm>

using namespace std;

int y, c, p;

int main() {
    scanf("%d %d %d", &y, &c, &p);
    printf("%d", min(y, min(c / 2, p)));
}