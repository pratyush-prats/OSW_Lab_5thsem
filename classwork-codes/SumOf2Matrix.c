//find the sum of 2 matrix
#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10
void main(){
	int matrix1[MAXROW][MAXCOL];
	int matrix2[MAXROW][MAXCOL];
	int i,j,r,c,sum=0;
	printf("Enter number of rows\n");
	 scanf("%d",&r);
	printf("Enter number of columns\n");
	 scanf("%d",&c);
	printf("Enter matrix 1 elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element [%d,%d]\n",i+1,j+1);
			scanf("%d",&matrix1[i][j]);			
		}		
	}
	printf("Enter matrix 2 elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element [%d,%d]\n",i+1,j+1);
			scanf("%d",&matrix2[i][j]);			
		}		
	}
	printf("The matrix 1 is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix1[i][j]);				
		}
		printf("\n");		
	}
	printf("The matrix 2 is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix2[i][j]);				
		}
		printf("\n");		
	}
	printf("The sum of 2 matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix1[i][j]+matrix2[i][j]);				
		}
		printf("\n");		
	}
}
