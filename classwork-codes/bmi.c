#include <stdio.h>
void main(){
		float weight,height;
		printf("Enter the weight in pounds and height in inches of a person\n");
		scanf("%f%f",&weight,&height);
		float bmi=(703 * weight)/height*height;
		if(bmi<18.5)
			printf("Underweight");
			
		else if(bmi>=18.5 && bmi <=24.9)
			printf("Normal");
			
		else if(bmi>=25.0 && bmi <=29.9)
			printf("Overweight");
		
		else 
			printf("Obese");
		
}
