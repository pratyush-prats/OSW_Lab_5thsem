//find whether a number is Harshad number or not(if number is divisible by sum of its digits)
#include<stdio.h>
#include<stdbool.h>
 int square(int x){
		return x*x; 
 }
 bool Automorphic(int n){
		int d;
		int x=square(n);
		d=x%10;
		if(d == n)
			return true;
		else 
			return false;
 }
 
 void main(){
 		int x;
 		printf("Enter a number\n");
 		scanf("%d",&x);
 		bool b = Automorphic(x);
 		if(b==true)
 			printf("Automorphic Number\n");
 		else
 			printf("Not Automorphic\n");
 }
