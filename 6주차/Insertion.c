#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;

    // 두 번째 원소부터 시작
    // 첫 번째 원소는 이미 정렬되어 있다고 생각한다.
    for (int i = 1; i < n; i++) {

        // 현재 삽입할 값을 key에 저장
        int key = arr[i];

        // key의 앞쪽에 있는 원소를 비교하기 위한 변수
        int j = i - 1;

        // key보다 큰 원소는 오른쪽으로 한 칸 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 빈 공간에 key 삽입
        arr[j + 1] = key;
    }

    // 정렬된 배열 출력
    printf("삽입 정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
