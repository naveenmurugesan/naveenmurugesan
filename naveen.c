  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  int a;
  clrscr();
  printf("\n enter the number");
  scanf("%d",&a);
  if(a>0)
  {
  printf("\n the given number is positive");
  }
  else if(a<0)
  {
  printf("\n the given number is negative");
  }
  else
  {
  printf("\n the given number is zero");
  }
  getch();
  }
