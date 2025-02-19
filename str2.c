#include<stdio.h>
#include<string.h>
int main(){
  char str1[20],str2[20];
  int result;
  printf("Enter first string");
  fgets(str1,sizeof(str1),stdin);
  printf("Enter second string");
  fgets(str2,sizeof(str2),stdin);
  result=strcmp(str1,str2);
  if(result==0){
    printf("Strings are equal");
  }
  else{
    printf("Strings are not equal");
  }
  return 0;
}
  
  
  
  
