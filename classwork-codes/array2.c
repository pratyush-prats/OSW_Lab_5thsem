//Accessing Array Element using loop
#include<stdio.h>
#define a_size 5
void main(){
	int sq[a_size],i,sum=0;
	for(int i=0;i<a_size;i++)
		sq[i]=i * i;
	for(int i=0;i<a_size;i++)
		printf("square[%d] has address %p and value %d \n",i,&sq[i],sq[i]);
	for(int i=0;i<a_size;i++)
		sum=sum+sq[i];
	printf("Sum of all data in the array is %d\n",sum);			
	
}
