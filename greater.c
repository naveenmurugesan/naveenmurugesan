#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
clrscr();
printf("\n a is greater than b");
scanf("%d",&a);
printf("\n b is greater than a");
scanf("%d",&b);
printf("\n c is greater than a");
scanf("%d",c);
if(a>b)&&(a>c)
printf("\n a is greater");
if(b>c)&&(b>a)
printf("\n b is greater");
if(c>a)&&(c>b)
printf("\n c is greater");
getch();
}
