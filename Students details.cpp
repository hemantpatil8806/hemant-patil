#include<stdio.h>
struct Student
{
	int rollNumber;
	char name[50];
	float marks;
};
int main()
{
	int i,n;
	printf("enter the number of students: ");
	scanf("%d",&n);
	
	struct Student students[n];
	
	for (i=0;i<n;i++)
	{
		printf("\nenter details for student %d\n",i + 1);
		printf("Roll Number:");
		scanf("%d", &students[i].rollNumber);
		
		printf("name:");
		scanf(" %[^\n]", students[i].name);
		
		printf("marks:");
		scanf("%f",&students[i].marks);	
}

printf("\n Student details\n");
for (i=0;i<n;i++)
{
printf("\nStudent %d\n",i+1);
printf("Roll Number:%d\n",students[i].rollNumber);
printf("name :%s\n",students[i].name);
printf("marks :%.2f\n",students[i].marks);
}
return 0;
}
