#include <stdio.h>
void main(){
	//$.35 per mile
	float beginning,ending,travel_distance,rate_per_mile=0.35,reimbursement,aftertax;
	printf("Enter Odometer reading at the beginning:\n");
	scanf("%f",&beginning);
	printf("Enter Odometer reading at the end:\n");
	scanf("%f",&ending);
	travel_distance=ending-beginning;
	printf("You travelled %f miles. At %f per mile. \n",travel_distance,rate_per_mile);
	reimbursement=travel_distance*rate_per_mile;
	printf("Your Reimbursement is $%f \n",reimbursement);
	aftertax=reimbursement+(reimbursement*0.05);
	printf("Your total Expense is $%f \n",aftertax);
	printf("In Rupees: Rs%f \n",(aftertax*80));
}
