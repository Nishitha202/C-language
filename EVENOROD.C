#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter a number\n");
scanf("%d",&num);
if(num%2==0)
{
printf("The number is even\n",num);
}
else{
printf("The number is odd\n",num);
}
getch();
}