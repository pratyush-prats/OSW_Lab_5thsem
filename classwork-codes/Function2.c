//Find the square of any number using a function
#include<stdio.h>
 int square(int x){
		return x*x; 
 }
 
 void main(){
 		int x;
 		printf("Enter a number\n");
 		scanf("%d",&x);
 		int sq = square(x);
 		printf("Square of %d is %d \n",x,sq);
 }
