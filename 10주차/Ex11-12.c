
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {

    char str1[20] = "Back"; // 20자리안에 Back이 있는 배열
    char str2[20] = "Space"; // 20자리 안에 Space가 있는 배열
    char str3[20]; // 20자리 있는 빈 배열

    char ch = 'p'; // ch안에 문자 p가있음
    int n = 3; // n안에 정수 3이있음

    int len = strlen(str1); // str1의 크기 측정
    printf("str1의 길이 : %d\n", len); // str1 크기 출력

    strcpy(str3, str1); // str3안에 str1복사
    printf("str1을 str3에 복사 : %s\n", str3); // 복사완료한 str3 출력

    strncpy(str3, str2, n);
    str3[n] = '\0'; // 번째 자리에 널 문자 넣기
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3); // str2의 첫 3번째 문자를 str3에 볷사

    return 0;
}
