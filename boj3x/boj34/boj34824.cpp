#include <stdio.h>
#include <string.h>

int n;
char s[55];

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        if (strcmp(s, "yonsei") == 0) {
            printf("Yonsei Won!");
            return 0;
        }
        if (strcmp(s, "korea") == 0) {
            printf("Yonsei Lost...");
            return 0;
        }
    }
}