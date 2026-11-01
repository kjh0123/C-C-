#include <stdio.h>

int main() {
    int n, i, j;
    char ch = 'A';
    int num = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j < n) {
                printf("%c", ch++);
            } else {
                printf("%d", num++);
            }
            if (j < n - 1) printf(" ");
        }
        if (i < n - 1) printf("\n");
    }

    return 0;
}