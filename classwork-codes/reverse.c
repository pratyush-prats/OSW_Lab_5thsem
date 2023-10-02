#include <stdio.h>

void main(){
		int n,d;
		printf("Enter a number \n");
		scanf("%d",&n);
		printf("Number before reversing: %d \n",n);
		printf("Number after reversing:");
		while(n!=0){
			 d=n%10;
			 printf("%d",d);
			 n=n/10;
		}
	}
