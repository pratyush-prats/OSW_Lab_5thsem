//rotate a square matrix 90 degree in clockwise 
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
	printf("The matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	//transpose
	for(i=0;i<c;i++){
		for(j=i+1;j<r;j++){
			int temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}
			
	}
	//reverse
	for(i=0;i<r;i++){
	    for(j=0;j<c/2;j++){
			int temp=matrix[i][j];
			matrix[i][j]=matrix[i][r-j-1];
			matrix[i][r-j-1]=temp;    
	    }
	}
	printf("The matrix after 90 degree clockwise rotation is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	
}
