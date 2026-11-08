#include <stdio.h>

int main(void) {
    int arr[100];
    scanf("%d", &arr[1]);
    arr[0] = 100;
    
    int i = 2;
    while(1) {
        arr[i] = arr[i - 2] - arr[i - 1];
        if(arr[i] < 0) {
            break;
        }
        i++;
    }
    
    for(int j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    return 0;
}