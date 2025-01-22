#include<stdio.h>
int main(){
  float number1,number2;
  float sum;
  printf("\n Enter two floating numbers");
  scanf("%f,%f",&number1,&number2);
  sum=number1+number2;
  printf("%.2f+%.2f=%.2f\n",number1,number2,sum);
  
  return 0;
} 

