#include<stdio.h>
int main(){
char*fruit[]={"Apple","Banana","Cherry"};
int a=10,b=20;
int *array[2];
array[0]=&a;
array[1]=&b;
printf("\n%d",*array[0]);
printf("\n%d",*array[1]);
return 0;
}
