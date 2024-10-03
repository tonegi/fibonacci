#include <stdio.h>

int main(void) {
int n, fibo1, fibo2, fibo3, counter;
  counter = 3;
  fibo1 = 0, fibo2 = 1;
  
  printf("Enter a number: ");
    scanf("%d",&n);
  
  if (n == 1){
    printf("0");
  }
  else if (n == 2){
    printf("0 1");
  }
  else if (n>2){
    printf("0 1 ");
  }
  
  while (counter > 2 && counter<=n){
    fibo3 = fibo1 + fibo2; 
    printf("%d ",fibo3);

    fibo1 = fibo2;
    fibo2 = fibo3;  
    counter++;
    }
  

  
  r
