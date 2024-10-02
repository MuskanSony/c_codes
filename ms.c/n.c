#include<stdio.h>


int main() {

 int n;
 do {
     printf("enter a number");
     scanf("%d", & n);
     printf("%d",n);
 }while(n%2==0);

  
  printf("done");
  
  return 0;

  }