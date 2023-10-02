#include <stdio.h>
// take 10 +ve numbers and find sum, go for next iteration using continue if user enters a negative number
void main(){
		int n,sum=0,i,c=0;
		printf("You have to Enter 10 positive numbers\n");
		
		for(i=1;i<=10;i++){
			printf("Enter n %d\n",i);
			scanf("%d",&n);
			if(n<0)
			  continue;
			sum+=n;c++;
		}
	
		
			printf("Sum = %d with %d numbers \n",sum,c);
}
