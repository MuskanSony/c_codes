#include <stdio.h>
int main() {

    int a;
    printf("enter a digit between 10 to 99");
    scanf("%d",&a);
    printf("%d", a>9 && a<100);

    return 0;

}