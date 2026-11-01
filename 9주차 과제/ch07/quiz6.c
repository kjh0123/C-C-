#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < i * 2; j++) {
            printf(" ");
        }
        for (j = 0; j < n - i; j++) {
            printf("%d", num++);
            if (j < n - i - 1) printf(" ");
        }
        if (i < n - 1) printf("\n");
    }

    return 0;
}