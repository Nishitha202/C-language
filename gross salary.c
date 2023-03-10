

#include <stdio.h>

int main()
{
    float bs,gs,da,hra;// bs=basic salary,gs=gross salary,da=dearness allowance,hra= house rent allowance//
    printf("enter the basic salary");
    scanf("%f",&bs);
    if(bs<1500){
        hra=bs*10/100;
        da=bs*90/100;
    }
    else{
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;//formula to calculate gross salary//
    printf("gross salary= Rs. %f",gs);
    return 0;
}

