//create a 2d array, store values and print it 
#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10
void main(){
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	printf("Enter number of rows\n");
	 scanf("%d",&r);
	printf("Enter number of columns\n");
	 scanf("%d",&c);
	printf("Enter matrix elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element [%d,%d]\n",i+1,j+1);
			scanf("%d",&matrix[i][j]);			
		}		
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix[i][j]);
						
		}
		printf("\n");		
	}
}
