#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c=5*((f-32)/9);

    printf("%.f fahrenheit = %.f Celcius", f, c);

    return 0;
}
