//to read 7 numbers in an array and display in reverse
#include<stdio.h>
#define ar_size 7
void printArray(int arr_ele);
void main(){
	int ar[ar_size];
	int i;
	printf("Enter 7 numbers\n");
	for(i=0;i<ar_size;i++){
		scanf("%d",&ar[i]);		
	}
	printf("Values of array in reverse order:");
	for(i=ar_size-1;i>=0;i--){
		printArray(ar[i]);	
	}
	
}
void printArray(int value){
	printf("%d",value);
}
