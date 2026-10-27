#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a > b){
        printf("max = %d", a);
    }else if(a<b){
        printf("max = %d",b);
    }else if(a > c){
        printf("max = %d",a);
    }else if(a < c){
        printf("max = %d",c);
    }else if(b > c){
        printf("max = %d",b);
    }else if(b < c){
        printf("max = %d",c);
    }
}