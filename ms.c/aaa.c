#include <stdio.h>
int main() {
    int number;
    printf("enter a number");
    scanf ("%d", & number);

    if( number>0){
        printf("number is positive");
        if( number%2 ==0){
            printf("number is even as well /n");
        }
        else{ printf("number is odd"); };
    }
    else{ printf("number is negative"); };
    return 0;
}