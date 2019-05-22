#include <stdio.h>
int main()
{
double number;
printf("enter a number:");
scanf("%lf", & number);

if (number<=0.0)
{
if(number == 0.0)
    printf("the number is zero");
else
    printf("the number is negative");
}
else
    printf("the number is positive");
    return 0;
