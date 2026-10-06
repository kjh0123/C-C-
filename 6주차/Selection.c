#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;
    int temp;

    // 배열의 처음부터 하나씩 정렬한다.
    for (int i = 0; i < n - 1; i++) {

        // 현재 위치의 값을 최솟값이라고 가정한다.
        int minIndex = i;

        // 현재 위치 다음부터 배열의 끝까지 비교한다.
        for (int j = i + 1; j < n; j++) {

            // 현재 최솟값보다 더 작은 값을 찾으면
            // 그 값의 위치를 저장한다.
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // 최솟값을 현재 위치의 값과 교환한다.
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // 정렬된 배열 출력
    printf("선택 정렬 결과: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
