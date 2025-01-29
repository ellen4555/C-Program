#include<stdio.h>
int main(){
  int number,i,factorial;
  factorial=1;
  printf("Enter a number");
  scanf("%d",&number);
  if (number>0){
  for(i=1;i<=number;i=i+1){
  factorial=factorial*i;
  }
  printf("%d",factorial);
  }
  else{
  printf("The given input is not positive");
  }
  return 0;
  }
  
  

