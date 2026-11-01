#include <stdio.h>

int main(void) {
    int n;
    int odd = 0;
    int even = 0;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }
    
    printf("odd : %d\n", odd);
    printf("even : %d\n", even);
    
    return 0;
}