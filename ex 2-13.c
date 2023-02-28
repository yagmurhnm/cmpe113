#include<stdio.h>
#include<stdlib.h>
#define constant 7.5

int main()

{
   float width,length,carpetPrice,totalCost,area;
   printf("enter the room length:");
   scanf("%f",&length);
   printf("room width:");
   scanf("%f",&width);
   printf("Enter the carpetPrice/square meter:");
   scanf("%f",&carpetPrice);
   area=width*length;
   totalCost=area*carpetPrice+area*constant;
   printf("total cost is %0.2f\n",totalCost);
   system("PAUSE");
   return 0;
	
	
	
	
	
}
