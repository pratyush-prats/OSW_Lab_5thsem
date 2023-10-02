//To add two numbers using a function
#include<stdio.h>
 int adder(int a,int b){
		return a+b; 
 }
 
 void main(){
 		int sum,a,b;
 		printf("Enter two numbers\n");
 		scanf("%d %d",&a,&b);
 		sum = adder(a,b);
 		printf("Sum of %d and %d is %d \n",a,b,sum);
 }
