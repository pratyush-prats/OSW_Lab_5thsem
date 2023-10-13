//To print the sum of boundary matrix
#include <stdio.h>
#define MAXROW 10
#define MAXCOL 10
void main(){
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c,sum=0;
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
	printf("The matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");		
	}
	printf("The boundary matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==0 || j==0 || i==r-1 || j==c-1){
				sum+=matrix[i][j];
				printf("%d\t",matrix[i][j]);
			}
			else 
			printf("\t");
		}
		printf("\n");
	}
	printf("Sum of the boundary elements is %d\n",sum);
}
