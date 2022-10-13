#include <stdio.h>

int main() 
{
    const area_of_a_slice=14.125;
    const pi=3.14;
    float diameter_of_pizza,area_of_pizza,number_of_slices;
    printf("enter the diameter of pizza");
    scanf("%f",&diameter_of_pizza);
    area_of_pizza=pi*diameter_of_pizza*diameter_of_pizza/4;
    number_of_slices=area_of_pizza/area_of_a_slice;
    printf("the number of slices %.1f",number_of_slices);
}