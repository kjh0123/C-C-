#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("#");
            if (j < i) printf(" ");
        }
        printf("\n");
    }

    for (k = 1; k <= n - 1; k++) {
        for (j = 1; j <= k * 2; j++) {
            printf(" ");
        }
        for (j = 1; j <= n - k; j++) {
            printf("#");
            if (j < n - k) printf(" ");
        }
        if (k < n - 1) printf("\n");
    }

    return 0;
}