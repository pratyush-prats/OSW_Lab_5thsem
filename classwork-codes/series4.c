#include <stdio.h>
//sum of series 1+4+9+...n
void main(){
		int n,sum=0;
		printf("Enter no of terms\n");
		scanf("%d",&n);
		//for(int i=1;i<=n;i++){
		//	sum=sum+(i*i);}
		sum=n * (n + 1) * (2 * n + 1)/6;
	
		printf("The sum of the series is: %d \n",sum);
}
