#include <stdio.h>

int main()
{
    int month;

    printf("월을 입력하시오(1~12) :");
    scanf("%d",&month);

    switch (month)
    {
        case 2:
            printf("28");
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        default:
            printf("31");
    }
    return 0;
}