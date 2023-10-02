#include <stdio.h>
void main(){
		int n,x=1;  
		printf("Enter the value of n");
		scanf("%d",&n);	
	  for(int i=0;i<n;i++){
		  	 printf("%d \t %d \n", i,x);
		  	 x=x*2; 		
	  }
}
