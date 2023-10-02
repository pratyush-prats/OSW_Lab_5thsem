#include <stdio.h>
#include <math.h>
// sum of series 1-4+9...n in TC O(1)
void main(){
		int n,sum=1;
		printf("Enter no of terms\n");
		scanf("%d",&n);
		sum=(pow(-1,n+1))*0.5*n*(n+1);
	
		printf("The sum of the series is: %d \n",sum);
}
