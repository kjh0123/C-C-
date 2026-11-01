#include <stdio.h>

int main(void) {
    int n;
    int count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            count++;
        }
    }
    
    printf("Even numbers = %d\n", count);
    
    return 0;
}