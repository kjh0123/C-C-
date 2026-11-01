#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    for (i = 1; i <= 2 * n - 1; i++) {
        k = (i <= n) ? i : 2 * n - i;
        for (j = 1; j <= k - 1; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * (n - k) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}