#include <stdio.h>
void main(){
		double unit,bill=0.0;
		printf("Enter electricity unit\n");
		scanf("%lf",&unit);
		if(unit<=50){
			bill=unit * 0.5;
			printf("bill is %lf \n",bill);
			}
		
		if(unit > 50 && unit <=150){
			bill= 50 * 0.5 + (unit - 50) * 0.75;
		
		}
		if(unit > 150 && unit <=250){
			bill= 50 * 0.5 + 100 * 0.75 +(unit - 100 - 50) * 1.2;
		
		}
		if(unit > 250){
			bill= 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (unit -100 - 100 - 50) * 1.5;
		
		}
		printf("total electricity bill is %lf \n",bill);
}
