#include<stdio.h>
#define pi 3.14159
int main(){
  int r1,r2,height;
  printf("Enter the radius of the circle");
  scanf("%d",&r1);
  printf("Enter the radius of the cylinder");
  scanf("%d",&r2);
  printf("Enter the height");
  scanf("%d",&height);
  float circle_area=pi*r1*r1;
  printf("Area of the circle is %.2f",circle_area);
  float cylinder_area=2*pi*r2*height;
  printf("\nArea of the cylinder is %.2f",cylinder_area);
  return 0;
}
