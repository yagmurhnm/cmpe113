#include<stdio.h>
#include<stdlib.h>
int main()
{
	int hours,minutes,seconds,out;
	printf("enter hours:");
	scanf("%d",&hours);
	printf("enter minutes:");
	scanf("%d",&minutes);
	printf("enter seconds:");
	scanf("%d",&seconds);
	out=hours*3600+minutes*60+seconds;
	printf("total seconds:%d",out);
	return (0);
}
