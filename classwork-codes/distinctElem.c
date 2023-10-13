#include <stdio.h>
int main() {
//	int a = 5, b = 9;
	
// 	printf("a = %d b = %d",&a, &d)
	int arr[] = {1,2,2,1,5};
	
	int repElem = arr[0];
	int length = sizeof(arr) / sizeof(arr[0]);
	int count =0;
	for(int i = 1; i < length; i++) {
	if(arr[i]==0){
	count++;
	}
		repElem = repElem ^ arr[i]; 
	}
	
	if(count == 1) {
		printf("%d\n", repElem);
		return 0;
	}
		
	if(repElem == 0) {
		printf("no rep no\n");
	}
	else {	
		printf("%d\n", repElem);
	}
	return 0;
}
