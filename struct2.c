#include<stdio.h>
typedef struct{
	int id;
	char name[20];
	float salary;
	}student;
int main(){
	int n;
	printf("Enter the no.of employees");
	scanf("%d",&n);
	student s[n];
	for(int i=0;i<n;i++){
		printf("Enter the name:");
	       	scanf("%s",s[i].name);
		printf("Enter the ID:");
		scanf("%d",&s[i].id);
		printf("Enter the salary:");
		scanf("%f",&s[i].salary);
	}
	printf("The employee details");
	for(int i=0;i<n;i++){
	printf("\nName:\t%s",s[i].name);
	printf("\nID:\t%d",s[i].id);
	printf("\nSalary:\t%f",s[i].salary);
	}
return 0;
}	
