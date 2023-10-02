#include <stdio.h>
//use of pointer example
void main(){
	int n=12;
	int *ptr=&n;
	printf("The value present in variable n: %d \n",n);
	printf("Address of the variable n: %p \n",&n);
	printf("The value present in variable ptr: %p \n",ptr);
	printf("Address of the variable ptr: %p \n",&ptr);
	printf("The value indirection of the variable ptr: %d \n",*ptr);
}
