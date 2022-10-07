#include<stdio.h>
int main()
{
    float age_of_the_account,interest_rate;
    printf("enter the mount of years since your account was opened");

    scanf("%f",&age_of_the_account);
    if (age_of_the_account>5) {
    interest_rate=7.5/100;
    printf("the interest rate for your savings is=%.2f",interest_rate);
}
    else
{
    interest_rate=5.4/100;
    printf("the interest rate for your savings is=%.2f",interest_rate);
}
}
