//find whether a number is Harshad number or not(if number is divisible by sum of its digits)
#include<stdio.h>
#include<stdbool.h>
 bool Harshad(int n){
		int d,sum=0,dup=n;
		while(dup!=0){
			d=dup%10;
			sum+=d;
			dup=dup/10;
		} 
		if(n % sum==0)
			return true;
		else 
			return false;
 }
 
 void main(){
 		int x;
 		printf("Enter a number\n");
 		scanf("%d",&x);
 		bool b = Harshad(x);
 		if(b==true)
 			printf("Harshad Number\n");
 		else
 			printf("Not Harshad\n");
 }
