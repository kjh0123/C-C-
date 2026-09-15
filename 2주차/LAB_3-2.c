#include <stdio.h>

int main()
{
    int powerConsumed, costPerkW; // 정수형 변수 선언

    printf("사용한 전력량(kw)을 입력하세요: ");         // 전력 사용량과 전력 요금을 입력받아 저장하기 위한 형식 지정자 %d
    scanf("%d", &powerConsumed);
    printf("전력 요금(1kw당 비용)을 입력하세요 :");
    scanf("%d", &costPerkW);

    long long totalCost = (long long)powerConsumed * costPerkW; // 오버플로를 방지하기 위한 명시적 형 변환

    printf("전기 요금 : %lld\n", totalCost);    // %lld : long long 자료형에 대한 형식 지정자

    return 0;
}