#include<stdio.h>
int main(){
    float sellingPrice,costPrice,profit,loss;
    printf("Enter the cost price:");
    scanf("%f",&costPrice);
    printf("Enter the selling price:");
    scanf("%f",&sellingPrice);
    if(sellingPrice>costPrice){
        profit=sellingPrice-costPrice;
        printf("The seller has made a profit of %.2f",profit);

    }
    else if(sellingPrice<costPrice){
        loss=costPrice-sellingPrice;
        printf("The seller has made a loss of %.2f",loss);
    }
return 0;
}
