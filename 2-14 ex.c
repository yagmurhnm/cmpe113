#include<stdio.h>
#include<stdlib.h>
int main()

{
	char name[30];
	int currentyear,theyearofbirth,age;
	printf("Enter name:"),
	//scanf("%s",&name);
	gets(name);
	printf("your name is %s,right!\n",name);
	printf("enter the current year:");
	scanf("%d",&currentyear);
	printf("Enter the year of birth:");
	scanf("%d",&theyearofbirth);
	age=currentyear-theyearofbirth;
	printf("your name is %s\nyour age is %d:",name,age);
	system("pause");
	return 0;
}
