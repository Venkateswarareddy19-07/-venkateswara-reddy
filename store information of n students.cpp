#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	struct student s;
	printf("enter the information of students:\n\n");
	printf("enter name:");
	scanf("%s",s.name);
	printf("enter marks:");
	scanf("%f",&s.marks);
	printf("\ndisplaying information\n");
	printf("name:%s\n",s.name);
	printf("roll:%d\n",s.roll);
	printf("marks:%.2f\n",s.marks);
	return 0;
	}
