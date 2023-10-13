//To display the transpose of a matrix
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
	printf("The matrix before Transpose:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix[i][j]);
		
		}
		printf("\n");		
	}
	printf("The matrix After Transpose:\n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%d\t",matrix[j][i]);
		}
		printf("\n");		
	}
}
