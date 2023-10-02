#include <stdio.h>
// take 10 +ve numbers and find sum terminate using break if user enters a negative number
void main(){
		int n,sum=0,i;
		printf("You have to Enter 10 positive numbers\n");
		
		for(i=1;i<=10;i++){
			printf("Enter n %d\n",i);
			scanf("%d",&n);
			if(n<0)
			  break;
			sum+=n;
		}
		if(i!=10)
			printf("The loop terminated because you entered a negative number\n");
		
			printf("Sum = %d with %d numbers \n",sum,(i-1));
}
