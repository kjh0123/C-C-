#include <stdio.h>

int binarySearch(int arr[], int size, int target){
    // 시작 위치를 0으로 설정
    int left = 0;
    // 끝 위치를 배열 크기 -1 한다
    int right = size - 1;

    // 시작 위치가 끝 위치보다 작거나 같은 동안 반복한다
    while (left <= right)
    {
        int mid = (left + right) / 2; // 중간 크기 계산
        
        if(arr[mid] == target){ // 중간값이 찾을값과 같다면
            return mid;
        } else if(arr[mid] < target){ // 중간값이 찾을값보다 작다면
            left = mid + 1; // 시작 위치를 중간 위치 +1 을한다
        } else{ // 그렇지 않다면
            right = mid - 1;
        }
    }
    return -1; // 반복이 종료될 때까지 값을 찾지 못했다면 -1을 반환한다.
}

int main() {
    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr,size,target);

    if (result != -1) {
        printf("원소 %d는 인덱스 %d에 존재합니다.\n", target,result);
    } else{
        printf("원소를 찾지 못했습니다.\n");
    }
    return 0;
}