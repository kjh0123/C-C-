#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    if(a >= 0 && a % 2 == 0){
        printf("Even Number");
    }else if(a >= 0 && a % 2 == 1){
        printf("Odd Number");
    }else{
        printf("Non positive");
    }
}