
#include <math.h>
#include <stdio.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    printf("Their product is %f and the value of the division is %f\n", *prod, *div);
    *pwr = powf(a,b);
    printf("The power of the first float to the secind float is %f \n", *pwr);
    *invb = 1 / b;
    printf("The inverse of b is %f\n", *invb);
    //changining the values using pointer
}


int main()
{
    float x, y;
    float prod, div, pwr, invb;
    printf("Enter the value of x\n");
    scanf("%f", &x);
    printf("Enter the value of y\n");
    scanf("%f", &y);
    proddivpowinv(x, y, &prod, &div, &pwr, &invb);
    //sending the addresses to the function to correspond with the parameter data type
    printf("%f, %f, %f, %f\n", prod, div, pwr, invb);
    //printing all the values after they changed
}
