#include <stdio.h>
#include <string.h>

struct Person {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void) {
    struct Person p[3];
    int i, min = 0;

    for (i = 0; i < 3; i++) {
        scanf("%s %s %s", p[i].name, p[i].tel, p[i].addr);
    }

    for (i = 1; i < 3; i++) {
        if (strcmp(p[i].name, p[min].name) < 0) {
            min = i;
        }
    }

    printf("name : %s\n", p[min].name);
    printf("tel : %s\n", p[min].tel);
    printf("addr : %s\n", p[min].addr);

    return 0;
}