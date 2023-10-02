//sum of series 1+4-9+16... n
#include <stdio.h>
void main(){
		int n,sum=1;
		printf("Enter no of terms\n");
		scanf("%d",&n);
		
		for(int i=2;i<=n;i++){
			if(i % 2==0)
				sum=sum+(i*i);
			else
				sum=sum-(i*i);
	}
		printf("The sum of the series is: %d \n",sum);
}
