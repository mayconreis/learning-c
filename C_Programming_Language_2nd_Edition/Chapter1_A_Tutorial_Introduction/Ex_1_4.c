#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("---------------------------------------------- \n");
    printf("-- Conversion of degrees Celsius to Fahrenheit -- \n");
    printf("---------------------------------------------- \n");
    while(celsius <= upper) {
        fahr = 1.8 * celsius + 32.0;
        printf("Cº%6.1f\t Fº%3.0f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}