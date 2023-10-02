#include <stdio.h>
// multilpication table of n
void main(){

		int n;
		printf("Enter a number\n");
		scanf("%d",&n);
		printf("The multiplication table of %d:\n",n);
		int i=1;
		do{	
			
			printf("%d x %d = %d \n",n,i,(n*i));
			i++;
		}while(i<=10);
}
