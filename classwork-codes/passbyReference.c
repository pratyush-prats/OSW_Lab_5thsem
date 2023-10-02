//Example of PASS BY REFERENCE
#include<stdio.h>
void swap(int *ptr1,int *ptr2){
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("After swapping value of a:%d \n",*ptr1);
	printf("After swapping value of b:%d \n",*ptr2);
}

void main(){
	int a=2,b=4;
	printf("Before swapping value of a:%d \n",a);
	printf("Before swapping value of b:%d \n",b);
	swap(&a,&b);
	printf("After swapping value of a:%d \n",a);
	printf("After swapping value of b:%d \n",b);
}
