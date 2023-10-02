#include <stdio.h>

void main(){
		int n,d;
		printf("Enter a number \n");
		scanf("%d",&n);
		printf("Number before Swapping: %d \n",n);
		int dup=n;
		int f,l,rev=0;
		l=dup%10;//5
		dup=dup/10;//1234
		while(dup!=0){
			rev=rev*10+(dup%10);
			dup=dup/10;
		}//4321
		f=rev%10;//1
		rev=rev/10;//432
		dup=l;//5
	  	while(rev!=0){ 
			dup=dup*10+(rev%10);
			rev=rev/10;
		}
		dup=dup*10+f;
		printf("Number After Swapping: %d \n",dup);
		

}
