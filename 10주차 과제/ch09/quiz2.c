#include <stdio.h>

int main(void) {
    int count[11] = {0};
    int num;
    
    while(1) {
        scanf("%d", &num);
        if(num == 0) {
            break;
        }
        count[num / 10]++;
    }
    
    for(int i = 10; i >= 0; i--) {
        if(count[i] > 0) {
            printf("%d : %d\n", i * 10, count[i]);
        }
    }
    
    return 0;
}