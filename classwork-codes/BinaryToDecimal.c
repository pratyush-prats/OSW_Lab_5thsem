#include <stdio.h>
#include <math.h>
void main(){
		int n,i=0,d,sum=0;
		printf("Enter a binary Number\n");
		scanf("%d",&n);
		int dup=n;
		while(dup!=0){
			 d=dup%10;
			 sum=sum+ (d * pow(2,i));
			 i++;
			 dup=dup/10;
		}
		printf("The Decimal equivalent of %d is %d \n",n,sum);
		
}
