//find if there is a triplet in the array which sums up to the given integer x
#include<stdio.h>
void main(){
	int arr[]={12,3,4,1,6,9};
	int X=23;
	int sum=0;
	
	for(int i=0;i<6;i++){
		for(int j=i+1;j<6;j++){
			for(int k=j+1;k<6;k++){
				sum+=arr[i]+arr[j]+arr[k];
				if(sum==X){
					printf("Triplets are %d %d %d\n",i,j,k);
					return;				
				}
				sum = 0;			
			}			
		}
	}
	if(sum==0)
		printf("not found\n");	
}
