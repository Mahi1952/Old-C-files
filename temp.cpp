#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f= (c * 9 / 5) + 32;

    printf("%.f Celsius = %.f Fahrenheit", c, f);

    return 0;
}
