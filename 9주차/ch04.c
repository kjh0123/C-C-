#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);

    int c = b + 100 - a;

    if (c < 0){
        printf("%d",c);
    }
    else{
        printf("%d\n",c);
        printf("Obesity\n");
        printf("Need control");
    }
}