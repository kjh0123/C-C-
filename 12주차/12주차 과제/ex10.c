#include <stdio.h>
#include <string.h>

struct Person {
    char name[21];
    int height;
    double weight;
};

int main(void) {
    struct Person people[5];

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d %lf", people[i].name, &people[i].height, &people[i].weight);
    }

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(people[i].name, people[j].name) > 0) {
                struct Person temp = people[i];
                people[i] = people[j];
                people[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", people[i].name, people[i].height, people[i].weight);
    }

    return 0;
}