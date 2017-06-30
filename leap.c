#include<stdio.h>
#include<conio.h>
int main()
{
int year;
clrscr();
printf("\n enter the year you want to check");
scanf("%d",&year);
if(year%400==0)
printf("\n it is a leap year");
else if(year%100==0)
printf("\n it is not a leap year");
else if(year%4==0)
printf("\n it is a leap year");
else
printf("\n it is not a leap year");
getch();
}





