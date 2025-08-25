#include <stdio.h>

fahrToCelsius() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    printf("---------------------\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

celsiusToFahrenheit() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 1;

    celsius = lower;

    printf("Celsius\tFahrenheit\n");
    printf("---------------------\n");
    while (celsius <= upper) {
        fahr = (celsius / (5.0/9.0)) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ... 300 */
main()
{
    fahrToCelsius();
    celsiusToFahrenheit();
}
