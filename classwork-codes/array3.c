//Storing values in an array using loop
#include<stdio.h>
#define a_size 5
void main(){
	int ar[a_size],i,sum=0;
	printf("Enter %d numbers\n",a_size);
	for(int i=0;i<a_size;i++)
		scanf("%d",&ar[i]);
	for(int i=0;i<a_size;i++){
		printf("the value present in %d index of array is %d \n",i,ar[i]);
		sum=sum+ar[i];
	}
	printf("Sum of all data in the array is %d\n",sum);
}
