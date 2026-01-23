#include <stdio.h>
#include <string.h>

int n, k, cur, save;
char act[10];

int main() {
    scanf("%d %d", &n, &k);
    while (n--) {
        scanf("%s", act);
        if (strlen(act) == 5) cur--;
        else if (act[0] == 'a') cur += k;
        else if (act[0] == 's') save = cur;
        else cur = save;
        printf("%d\n", cur);
    }
    return 0;
}