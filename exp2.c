#include<stdio.h>
int main(){
  int num1,num2,result;
  char operator;
  printf("Enter num1 and num2");
  scanf("%d%d", &num1, &num2);
  printf("Enter the operator");
  scanf(" %c", &operator);
  switch(operator){
  case '+':
    result=num1 + num2;
    printf("result: %d + %d = %d\n",num1,num2,result);
    break;
   case '-':
    result=num1 - num2;
    printf("result: %d - %d = %d\n",num1,num2,result);
    break;
  case '*':
    result=num1 * num2;
    printf("result: %d * %d= %d\n",num1,num2,result);
    break;
  case '/':
    result=num1 / num2;
    printf("result: %d / %d = %d\n",num1,num2,result);
    break;
  case '%':
    result=num1 % num2;
    printf("result: %d %% %d = %d\n",num1,num2,result);
    break;
    }
  return 0;
  }
    
    
     
  
