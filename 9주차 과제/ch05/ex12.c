#include <stdio.h>

int main(void) {
    int n;
    
    while (1) {
        printf("1. Korea\n");
        printf("2. USA\n");
        printf("3. Japan\n");
        printf("4. China\n");
        printf("number? ");
        scanf("%d", &n);
        printf("\n");
        
        if (n == 1) {
            printf("Seoul\n\n");
        } else if (n == 2) {
            printf("Washington\n\n");
        } else if (n == 3) {
            printf("Tokyo\n\n");
        } else if (n == 4) {
            printf("Beijing\n\n");
        } else {
            printf("none\n");
            break;
        }
    }
    
    return 0;
}