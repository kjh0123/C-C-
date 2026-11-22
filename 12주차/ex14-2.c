#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    FILE* filePtr;                      // FILE형 포인터로, 파일에 대한 참조를 저장
    char filename[] = "example.txt";    // 읽을 파일명을 담는 문자열
    char buffer[100];                   // 파일 내용을 읽기 위한 버퍼

    // 파일을 읽기 모드로 열기
    filePtr = fopen(filename, "r");     // filename에 지정된 파일명을 읽기 모드로 설정

    // 파일 열기에 실패했는지 확인
    if (filePtr == NULL) {
        printf("파일을 열 수 없습니다: %s\n", filename);
        return 1;    // 오류 코드 반환 후 프로그램 종료
    }

    // 파일에서 문자열 읽기
    if (fgets(buffer, 100, filePtr) != NULL) {    // fgets() 함수를 사용하여 파일에서 최대 100자를 읽어 buffer에 저장
        printf("example.txt 파일에서 읽은 내용: %s", buffer);
    }
    else {
        printf("파일에서 읽기 실패.\n");
    }

    // 파일 닫기
    fclose(filePtr);

    return 0;
}
