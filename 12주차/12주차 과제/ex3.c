#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main(void) {
    struct Person me = {"Yejun", 12};
    struct Person friend_;

    scanf("%s %d", friend_.name, &friend_.age);

    printf("Your name: %s, age: %d\n", me.name, me.age);
    printf("Friend's name: %s, age: %d\n", friend_.name, friend_.age);

    return 0;
}