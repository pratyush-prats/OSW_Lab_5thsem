#include <stdio.h>
void main(){
		double salary,tax=0.0;
		printf("Enter the salary\n");
		scanf("%lf",&salary);
		
		if(salary <= 150000){
			tax=0;			
		}
		
		else if(salary>150000 && salary <= 300000){
			tax=(salary-150000)*0.1;
		}
		
		else if(salary > 300000 && salary <= 500000){
			tax= 150000 * 0.1 + (salary - 300000) * 0.2;
		}
		
		else {
			tax=150000 * 0.1 + 200000 * 0.2 + (salary - 500000) * 0.3;
		}
		
		printf("Tax amount to be paid is %lf \n",tax);
}
