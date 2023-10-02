//Example of PASS BY VALUE
#include<stdio.h>
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping value of a:%d \n",a);
	printf("After swapping value of b:%d \n",b);
}

void main(){
	int a=2,b=4;
	printf("Before swapping value of a:%d \n",a);
	printf("Before swapping value of b:%d \n",b);
	swap(a,b);
	printf("After swapping value of a:%d \n",a);
	printf("After swapping value of b:%d \n",b);
}
