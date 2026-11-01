#include <stdio.h>

int main(void) {
    int n;
    char ch = 'A';
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }
    
    return 0;
}