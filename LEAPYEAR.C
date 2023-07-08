#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter a year\n");
scanf("%d",&year);
if(year%400==0)//if statement to check whether a year is leap or not
{
printf("It is a leap year",year);
}
else if(year%4==0)
{
printf("It is a leap year",year);
}
else{
printf("It is not a leap year",year);
}
getch();
}
