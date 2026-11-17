#include <stdio.h>

int main() {
    FILE *file;
    int ch1, ch2;

    // oneletter.txt 파일을 읽기 모드로 열기
    file = fopen("oneletter.txt", "r");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 파일에서 한 문자씩 읽어 ch1과 ch2에 저장
    ch1 = fgetc(file);
    ch2 = fgetc(file);

    // 파일 닫기
    fclose(file);

    // 읽은 문자 출력
    if (ch1 != EOF && ch2 != EOF) {
        printf("oneletter 파일에서 문자 '%c', '%c'를 성공적으로 읽었습니다.\n", ch1, ch2);
    }
    else {
        printf("파일에서 문자를 읽는 데 실패했습니다.\n");
    }

    return 0;
}