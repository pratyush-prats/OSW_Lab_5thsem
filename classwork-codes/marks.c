#include <stdio.h>
void main(){
	int mark;
	printf("Enter mark of the student\n");
	scanf("%d",&mark);
	if(mark>0 && mark<=100){
		 if(mark>90){
	 		printf("O\n");
		 }
		 else if(mark<=90 && mark>80)
	 		printf("A\n");
	 		
		 else if(mark<=80 && mark>70)
	 		printf("B\n");
	 		
		 else if(mark<=70 && mark>60)
	 		printf("C\n");
	 		
		 else if(mark<=60 && mark>50)
	 		printf("D\n");
	 		
	 else {
	 		printf("F\n");
	 }
	}
	else{
			printf("INVALID INPUT\n");
	}
	

}
