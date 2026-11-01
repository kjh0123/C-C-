#include <stdio.h>

int main(void) {
    int n;
    int cnt3 = 0, cnt5 = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 3 == 0) {
            cnt3++;
        }
        if (n % 5 == 0) {
            cnt5++;
        }
    }
    
    printf("Multiples of 3 : %d\n", cnt3);
    printf("Multiples of 5 : %d\n", cnt5);
    
    return 0;
}