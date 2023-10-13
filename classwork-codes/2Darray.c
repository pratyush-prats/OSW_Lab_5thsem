#include <stdio.h>
void main(){
	int matrix[4][3]={{2,4,6},{1,3,7},{9,8,4},{12,13,14}};
	for(int r=0;r<4;r++){
		for(int c=0;c<3;c++){
			printf("%d\n",matrix[r][c]);
		}	
	}
}
