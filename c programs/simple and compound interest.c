#include <stdio.h>
#include<math.h>

int main() 
{
    float principle_amount,number_of_years,rate_of_interest,simple_interest,compound_interest; 
    printf("enter the principle amount");
    scanf("%f",&principle_amount);
    printf("enter the number of years");
    scanf("%f",&number_of_years);
    printf("enter the rate of interest");
    scanf("%f",&rate_of_interest);
    simple_interest=(principle_amount*number_of_years*rate_of_interest)/100;
    compound_interest=principle_amount+pow((1+(rate_of_interest/number_of_years)),(number_of_years*number_of_years));
    printf("the simple interest is=%.3f\n",simple_interest);
    printf("the compound interest is=%.3f",compound_interest);
}