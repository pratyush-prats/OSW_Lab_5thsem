//find the row with maximum number of 1s
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
	printf("Enter matrix elements(0 and 1 only):\n");
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
	int rowIndex=-1,maxCount=0;
	for(int i=0;i<r;i++){
        int count = 0 ;
        for(int j=0;j<c;j++){
            if(matrix[i][j]==1){
                count++ ;
            }
        }
        if(count > maxCount){
            maxCount = count ;
            rowIndex = i ;
        }
    }
    printf("The index of Row with max 1s is: %d\n",rowIndex);
}
