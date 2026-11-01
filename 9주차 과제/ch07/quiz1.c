#include <stdio.h>

int main() {
    int n, i, j, cnt;

    scanf("%d", &n);

    for (i = 1; i <= 2 * n - 1; i++) {
        cnt = (i <= n) ? i : 2 * n - i;
        for (j = 1; j <= cnt; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}