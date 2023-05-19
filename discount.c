
#include <stdio.h>
int main()
{
    int quantity,dis=0;
    float rate,total;
    printf("enter the quantity and  rate");
    scanf("%d%f",&quantity,&rate);
    if(quantity>1000)
    {
    dis=10;
    printf("\nyou have an discount\n");}
}
    total=(quantity*rate)-(quantity*rate*dis/100); //formula to calculate discount//
    printf("total expenses= Rs %f\n",total);

    return 0;
}
