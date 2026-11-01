#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int min = (a < b) ? a : b;
    int max = (a > b) ? a : b;
    
    int sum = 0;
    int count = 0;
    
    for (int i = min; i <= max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            count++;
        }
    }
    
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", (double)sum / count);
    
    return 0;
}