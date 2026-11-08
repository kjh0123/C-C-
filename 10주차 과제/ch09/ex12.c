#include <stdio.h>

int main(void) {
    int scores[5][4];
    int sum[5] = {0};
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &scores[i][j]);
            sum[i] += scores[i][j];
        }
    }
    
    for(int i = 0; i < 5; i++) {
        double avg = (double)sum[i] / 4.0;
        printf("%d %.1f\n", sum[i], avg);
    }
    
    return 0;
}