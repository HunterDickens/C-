#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Temperature in Celsius is: %lf\n", celsius);

    return 0;
}

