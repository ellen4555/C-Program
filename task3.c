#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number%2==0){
        printf("The given number is even number");
    } else {
        printf("The given number is an odd number");
    }
    return 0;
}
