#include <stdio.h>
void main(){
		int n,sum=0,j=1;
		printf("Enter no of terms\n");
		scanf("%d",&n);
		for(int i=1;i<=n;i++,j+=2){
			if(i % 2==0)
				sum=sum-j;
			else
				sum=sum+j;
	}
		printf("The sum of the series is: %d \n",sum);
}
