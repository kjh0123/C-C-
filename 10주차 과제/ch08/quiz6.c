#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;
    int sum = 0;
    
    for(int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
        count++;
    }
    
    int mul_count = 0;
    for(int i = 0; i < count; i++) {
        if(arr[i] % 5 == 0) {
            mul_count++;
            sum += arr[i];
        }
    }
    
    double avg = mul_count > 0 ? (double)sum / mul_count : 0.0;
    
    printf("Multiples of 5 : %d\n", mul_count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
    return 0;
}