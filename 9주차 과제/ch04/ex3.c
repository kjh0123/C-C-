#include <stdio.h>

int main(void) {
    int num;
    
    scanf("%d", &num);
    
    if (num > 0) {
        printf("Input value : %d\n", num);
        printf("Positive number\n");
    }
    
    return 0;
}