/* Grade calculator, created by Berat Postalcioglu */

#include <stdio.h>
double essay_calc(double grd1, double grd2, double grd3)
{
    double sum1, sum2, sum3, result;

    sum1 = (100*(grd1) / 22.0);
    sum2 = (100*(grd2) / 22.0);
    sum3 = (100*(grd3) / 22.0);

    result = ((sum1*1.10) - sum1 + (sum2*1.15) - sum2 + (sum3*1.20) - sum3);

    return (result);
}
double presentation(double pre1, double pre2)
{
    double sum1, sum2, result;

    sum1 = (100*(pre1))/23.0;
    sum2 = (100*(pre2))/40.0;

    result = ((sum1 + sum2)/2)/5;

    return (result);
}
double hw(double grd1)
{
    return ((grd1*15)/100.0);
}
double final1(double final_grade)
{
	return ((final_grade)*20/22);
}
int main(void)
{
    double ess_grd1, ess_grd2, ess_grd3, pre_grd1, pre_grd2, hw_grd, final_grade;
    double result, essay, present, howork, final;
    
	printf("Enter 3 essay grades: ");
    scanf("%lf %lf %lf", &ess_grd1, &ess_grd2, &ess_grd3);
    printf("\nEnter 2 presentation grades: ");
    scanf("%lf %lf", &pre_grd1, &pre_grd2);
    printf("\nEnter 1 HW grade: ");
    scanf("%lf", &hw_grd);
    printf("\nEnter actual or expected final grade: ");
    scanf("%lf", &final_grade);

    essay = essay_calc(ess_grd1, ess_grd2, ess_grd3);
    present = presentation(pre_grd1, pre_grd2);
    howork = hw(hw_grd);
    final = final1(final_grade);

    result = (essay + present + howork + final);
    
    printf("-------------------------\n");
    printf("\nEssays: %.2f\n", essay);
    printf("\nPresentations: %.2f\n", present);
    printf("\nHomeworks: %.2f\n", howork);
    printf("\nFinal: %.2f\n", final);
    printf("\nTotal: %.2f\n", result);
    printf("\n-------------------------\n");
	
	if(result >= 90)
		printf("\nGrade of course is %.2f, and letter grade is A\n", result);
	else if(result >= 85)
		printf("\nGrade of course is %.2f, and letter grade is A-\n", result);
	else if(result >= 80)
		printf("\nGrade of course is %.2f, and letter grade is B+\n", result);
	else if(result >= 75)
		printf("\nGrade of course is %.2f, and letter grade is B\n", result);
	else if(result >= 70)
		printf("\nGrade of course is %.2f, and letter grade is C\n", result);
	else
		printf("\nYou failed with ENG101\n");
		
	
    return 0;
}
