// Add two numbers using pointers
#include<stdio.h>
void main(){
	int a,b,sum=0;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	sum=*ptr1 + *ptr2;
	printf("Sum of %d and %d is %d\n",a,b,sum);
}
