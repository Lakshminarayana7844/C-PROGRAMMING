#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if (num==0)
	printf("neither positive nor negative");
	else if(num<0)
	printf("negative");
	else
	printf("positive");
	return 0;
}
