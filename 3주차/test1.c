#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하세요 :");
    
    scanf("%d",&num);

    printf("%s", (num%2==0)?"Even":"Odd");
    return 0;
}