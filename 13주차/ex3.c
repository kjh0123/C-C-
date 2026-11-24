#include <stdio.h>

int main(void) {
    char food[5];
    printf("좋아하는 음식?\n");
    fgets(food, sizeof(food),stdin);
    scanf("%s", food);
    printf("좋아하는 음식: %s\n",food);
    return 0;
}