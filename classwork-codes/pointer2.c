#include <stdio.h>
//use of pointer example 2
void main(){
	int n=10;
	int *ptr=&n;
	*ptr=20;
	
	printf("The value present in variable n: %d \n",n);
	*ptr=2 + *ptr;
	printf("The value present in variable n: %d \n",n);
	*ptr= ++(*ptr);
	printf("The value present in variable n: %d \n",n);
	
}
