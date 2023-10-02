#include <stdio.h>
void main(){
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is Even\n",n);
	}
	else{
		printf("%d is Odd\n",n);
	}

}
