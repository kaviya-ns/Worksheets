#include <stdio.h>

int main() 
{
    const area_of_a_slice=14.125;
    const pi=3.14;
    float diameter_of_pizza,area_of_pizza,number_of_slices,number_of_people,number_of_pizza_to_be_ordered,total_number_of_slices;
    printf("enter the number of people who will be at the party");
    scanf("%f",&number_of_people);
    printf("enter the diameter of pizza to be ordered");
    scanf("%f",&diameter_of_pizza);
    area_of_pizza=pi*diameter_of_pizza*diameter_of_pizza/4;
    number_of_slices=area_of_pizza/area_of_a_slice;
    total_number_of_slices=4*number_of_people;
    number_of_pizza_to_be_ordered=total_number_of_slices/number_of_slices;
    printf("the number of pizzas to be ordered %.1f",number_of_pizza_to_be_ordered);
}