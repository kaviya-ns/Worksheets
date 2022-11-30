#include<stdio.h>
struct student 
{
      char studentName[100];
      char Rollno[100];
      char course[100];
      char branch[100];
      char gender[100];
      float cut_off_mark;
};
int main()
{
   struct student a,b;
   printf("name:");
   scanf("%s",a.studentName);
   printf("Rollno:");
   scanf("%s",a.Rollno);
   printf("course:");
   scanf("%s",a.course);
   printf("branch:");
   scanf("%s",a.branch);
   printf("gender[male/female]:");
   scanf("%s",a.gender);  
   printf("cut-off mark:");
   scanf("%f",&a.cut_off_mark);
   printf("name:");
   scanf("%s",b.studentName);
   printf("Rollno:");
   scanf("%s",b.Rollno);
   printf("course:");
   scanf("%s",b.course);
   printf("branch:");
   scanf("%s",b.branch);
   printf("gender[male/female]:");
   scanf("%s",b.gender);  
   printf("cut-off mark:");
   scanf("%f",&b.cut_off_mark); 
   if (a.cut_off_mark>b.cut_off_mark)
   {
       printf("%s",a.studentName);
       printf("%s",a.Rollno);
       printf("%s",a.course);
       printf("%s",a.branch);
       printf("%s",a.gender);
       printf("%f",a.cut_off_mark);
   }
   else 
   {
       printf("%s",a.studentName);
       printf("%s",a.Rollno);
       printf("%s",a.course);
       printf("%s",a.branch);
       printf("%s",a.gender);
       printf("%f",a.cut_off_mark);
   }
}
