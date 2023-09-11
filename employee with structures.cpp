#include<stdio.h>
#include<string.h>
struct emp
{
	int ei;
	char pos[10];
	char d[10];
	int sal;
};
int main()
{
	struct emp a;
	printf("Enter employee id    :");
	scanf("%d",&a.ei);
	printf("\nEnter position     :");
	scanf("%s",a.pos);
	printf("\nEnter Deptpartment :");
	scanf ("%s",a.d);
	printf("\nEnter Salary       :");
	scanf("%d",&a.sal);
	printf("\nEmployee id  :%d",a.ei);
	printf("\nPosition     :%s",a.pos);
	printf("\nDeptpartment :%s",a.d);
	printf("\nSalary       :%d",a.sal);
}
