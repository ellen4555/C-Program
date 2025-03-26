#include<stdio.h>
int sumArray(int[],int);
int main(){
  int n,sum;
  printf("Enter the no.of elements");
  scanf("%d",&n);
  int arr[n];
  sum=sumArray(arr,n);
  printf("%d",sum);
  return 0;
  }
  int sumArray(int array[],int n){
  int sum=0;
  printf("Enter elements");
  for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  for(int i=0;i<n;i++){
  sum=sum+array[i];
  }
  return sum;
  }s
  
  
  
  
  
