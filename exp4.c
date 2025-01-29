#include<stdio.h>
int main(){
  int number,i,factorial;
  factorial=1;
  printf("Enter a number");
  scanf("%d",&number);
  if (number>0){
  while(number>0){
  factorial=factorial*number;
  number=number-1;
  }
  printf("%d",factorial);
  }
  else{
  printf("The given input is not positive");
  }
  return 0;
  }
