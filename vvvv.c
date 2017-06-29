#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("\n enter the character");
scanf("%c",&c);
if((c>='a'&& c<= 'z')||(c>='A' && c<='B'))
printf("\n it is an alphabet",c);
else
printf("\n it is not an alphabet",c);
getch();
}

