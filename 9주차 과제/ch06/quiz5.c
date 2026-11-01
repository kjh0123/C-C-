#include <stdio.h>

int main(void) {
    int n;
    int even_count = 0, odd_count = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("even : %d\n", even_count);
    printf("odd : %d\n", odd_count);
    
    return 0;
}