#include<stdio.h>
int main(){
   int angle1,angle2,angle3;
   printf("\nEnter the three angles:");
   scanf("%d,%d,%d",&angle1,&angle2,&angle3);

   if(angle1+angle2+angle3==180){
      printf("Triangle is valid");
   }else{
      printf("Triangle is not valid");
   }

   return 0;
   }

