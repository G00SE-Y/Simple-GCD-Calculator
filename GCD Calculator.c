#include <stdio.h>
//Code written by Ethan Woollet FEB - 2021

int GCD(int x, int y){
    int num, denom, quot, rem;
    if(x>y)
    {
        num = x;
        denom = y;
    }
    else if(y>x)
    {
        num = y;
        denom = x;
    }
    quot = num/denom;
    rem = num%denom;
    printf("%d / %d = %d  R: %d\n", num, denom, quot, rem);
    if(rem == 0)
        return denom;
    else
        GCD(denom, rem);
}

int main(void)
{
    int x, y;
    printf("Please enter two integers separated by commas (ex: 5,11)\n");
    scanf("%d,%d", &x, &y);
    printf("Greatest common divisor is %d\n", GCD(x,y));
}
