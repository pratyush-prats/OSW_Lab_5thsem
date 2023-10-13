//pass by value using array
#include<stdio.h>
void printArray(int arr_ele, int index);
void main(){
	int ar[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
		printArray(ar[i],i);
}
void printArray(int value,int index){
	printf("At position %d you entered %d \n", index + 1,value);
}

