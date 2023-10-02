#include<stdio.h>
void main(){
	int n;
	printf("Enter a Number \n");
	scanf("%d",&n);
	printf("The multiplication Table of %d is:\n",n);
	for(int i=1;i<=10;i++){
		printf("%d x %d = %d \n",n,i,n*i);
	}
}
