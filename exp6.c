#include<stdio.h>
int main(){
  int n,i,item;
  printf("Enter the no.of elements");
  scanf("%d",&n);
  int number[n];
  printf("Enter the %d elements",n);
  for(i=0;i<n;i++){
    scanf("%d",&number[i]);
  }
  printf("Enter the element to search");
  scanf("%d",&item);
  for(i=0;i<n;i++){
    if(item==number[i]){
      printf("\nThe given element found at position: %d",i+1);
    }
  }
  return 0;
}
