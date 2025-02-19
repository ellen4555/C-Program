#include<stdio.h>
int main(){
  char str1[20],temp;
  int length,i;
  printf("Enter a string:");
  fgets(str1,sizeof(str1),stdin);
  for(length=0;str1[length]!='\0';length++);
    i=length-1;
  for(int j=0;j<=length/2;j++){
    temp=str1[i];
    str1[i]=str1[j];
    str1[j]=temp;
    i--;
  }
  printf("Reversed string: \n");
  puts(str1);
    return 0;
}
    
    
  
  

