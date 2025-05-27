#include <stdio.h>
#define RATE 50

void salaryCal()

{

 int hours;
 float salary,deduction;

    printf("Please Enter Your Working Hours:\n");
    scanf("%d",&hours);

    salary = hours*RATE;
    if(hours<40)
    {
  deduction = salary * 0.1;
  salary -= deduction;

    }
    printf("Your Weekly Salary is % .2f. According to the time worked!\n\n",salary);
    printf("Your Bi-Weekly Salary is % .2f. According to the time worked!\n\n",salary*2);
    printf("Your Monthly Salary is % .2f. According to the time worked!\n\n",salary*4);
    printf("Your Yearly Salary is % .2f. According to the time worked!\n\n",salary*12);
}

