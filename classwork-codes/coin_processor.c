#include <stdio.h>
void main(){
	/*
	1 penny=1 cent
	1 dollar = 100 cents
	1 nickel = 5 cents
	1 dime = 10 cents
	1 quarter = 25 cents
	*/
	char first, middle, last;
	int dollars, quarters, dimes, nickels, pennies,total_cents=0;
	printf("Enter customer initials");
	scanf("%c%c%c",&first,&middle,&last);
	//printf("");
	printf("Enter no of $ coins\n");
	scanf("%d",&dollars);
	printf("Enter no of quarters\n");
	scanf("%d",&quarters);
	printf("Enter no of dimes\n");
	scanf("%d",&dimes);
	printf("Enter no of nickels\n");
	scanf("%d",&nickels);
	printf("Enter no of pennies\n");
	scanf("%d",&pennies);
	total_cents=(pennies)+(dollars*100)+(nickels*5)+(dimes*10)+(quarters*25);
	printf("%c%c%c Coin Credit \n",first,middle,last);
	printf("Dollars :%d \n",total_cents/100);
	printf("Change :%d ",total_cents%100);
	
}
