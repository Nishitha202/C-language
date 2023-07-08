#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5]={2,3,6,8,4};//arr is an array name
int n=5;
int i;
clrscr();
for(i=n-1;i>=0;i--)//for loop used to print the reverse of an array 
{
printf("%d\n",arr[i]);
}
getch();
}
