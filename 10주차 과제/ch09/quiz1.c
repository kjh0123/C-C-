#include <stdio.h>

int main(void) {
    int count[7] = {0};
    int num;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if(num >= 1 && num <= 6) {
            count[num]++;
        }
    }
    
    for(int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i, count[i]);
    }
    
    return 0;
}