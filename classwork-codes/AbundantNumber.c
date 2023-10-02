//find whether a number is Abundant number or not(if sum of its proper divisors is greater than number)
#include<stdio.h>
#include<stdbool.h>
 bool Abundant(int n){
		int d,i,sum=0,dup=n;
		for(i=1;i<n;i++){
			if(n % i==0)
			sum+=i;
		}
		
		if(sum>n)
			return true;
		else 
			return false;
 }
 
 void main(){
 		int x;
 		printf("Enter a number\n");
 		scanf("%d",&x);
 		bool b = Abundant(x);
 		if(b==true)
 			printf("Abundant Number\n");
 		else
 			printf("Not Abundant\n");
 }
