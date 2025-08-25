#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

fahrToCelsius() {
    float fahr, celsius;

    fahr = LOWER;
    printf("Fahrenheit\tCelsius\n");
    printf("---------------------\n");
    while (fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}

celsiusToFahrenheit() {
    float fahr, celsius;
    celsius = LOWER;

    printf("Celsius\tFahrenheit\n");
    printf("---------------------\n");
    while (celsius <= UPPER) {
        fahr = (celsius / (5.0/9.0)) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + STEP;
    }
}

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ... 300 */
main()
{
    fahrToCelsius();
    celsiusToFahrenheit();
}
