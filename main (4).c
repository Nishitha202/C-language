//In the program the current year and year of joining the organization is entered through keyboard.If the number of years for which the employee has served the organization is greater than 5 years,then a bonus 50000/- is given to the employee .If the years of service are not greater than 5, then the program display a message// 


#include <stdio.h>

int main()
{
    int bonus,cy,yoj,yos;//cy=current year ,yoj=year of joining, yos=year of service//
    printf("Enter the current year and year of joining");
    scanf("%d %d",&cy,&yoj);
    yos=yoj-cy;
    if(yos>5)
    {
        bonus=50000;
        printf("Bonus= Rs. %d\n",bonus);
    }
    else{
        printf("you are not eligible for bonus this year");
    }
    return 0;
}
