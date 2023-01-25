#include<stdio.h>
#include<conio.h>
int main(){
int arr[5]={1,2,3,4,5};
int sum=0,i;
clrscr();
for(i=0;i<=5;i++)
{
sum=sum+arr[i];
}
printf("The sum of arrays is %d",sum);
getch();
return 0;
}