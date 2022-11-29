#include<stdio.h>
void parkingcharge();
void main()
{
   parkingcharge();

}
void parkingcharge()
{
   char type_of_vehicle;
   float hours_spent_in_parkinglot_by_vehicle,parking_charge;
   printf("enter the number of hours spent by the vehicle in the parking lot");
   scanf("%f",&hours_spent_in_parkinglot_by_vehicle);
   printf("enter the type of vehicle(c:car,b:bus,t:truck):\n ");
   scanf("%s",&type_of_vehicle);
   switch(type_of_vehicle)
   {
     case 'b':
         parking_charge=hours_spent_in_parkinglot_by_vehicle*3;
         printf("parking charge :%f",parking_charge);
         break;
      case 'c':
         parking_charge=hours_spent_in_parkinglot_by_vehicle*2;
         printf("parking charge :%f",parking_charge);
         break;
      case 't':
         parking_charge=hours_spent_in_parkinglot_by_vehicle*4;
         printf("parking charge :%f",parking_charge);
         break;
      default:
        printf("invalid choice");
   }
}
