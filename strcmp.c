
  

#include <stdio.h>
#include<string.h>
int main()
{
char s1[10],s2[10];
printf("enter a string");
gets(s1);
printf("enter a string");
gets(s2);
if(strcmp(s1,s2)==0)
    return 0;

    else
    return 1;

return 0;
}
