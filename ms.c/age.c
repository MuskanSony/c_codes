#include <stdio.h>
int main() {
    int a;
    printf("enter your age");
    scanf("%d",& a);
    
    if (a>=0 && a<10){
        printf("child");
    }
    else if (a>=10 && a<20){
        printf("adolescent");
    }
    else if (a>=20 && a<=30){
        printf("adult");
    }
    else {
        printf("invalid");
    }
    return 0;
}  