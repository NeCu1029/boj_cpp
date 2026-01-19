#include <stdio.h>

int yb, mb, db, bb, yc, mc, dc, bc, x;

int main() {
    scanf("%d %d %d %d %d %d", &yb, &mb, &db, &yc, &mc, &dc);
    bb = mb * 100 + db;
    bc = mc * 100 + dc;
    x = yc - yb;
    printf("%d\n%d\n%d", x - (bb > bc), x + 1, x);
    return 0;
}