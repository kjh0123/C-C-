#include <stdio.h>
#include <math.h>

struct Body {
    int height;
    double weight;
};

struct Body makeStudent(struct Body father, struct Body mother)
{
    struct Body s;
    s.height = (int)((father.height + mother.height) / 2.0 + 5);
    s.weight = round(((father.weight + mother.weight) / 2.0 - 4.5) * 10) / 10;
    return s;
}