#include <stdio.h>
//sum of series 1-3+5...n without loop
void main(){
		int n,sum=0;
		printf("Enter no of terms\n");
		scanf("%d",&n);
		if(n % 2==0)
			sum=-n;
		else
			sum=n;
		printf("The sum of the series is: %d \n",sum);
	}

