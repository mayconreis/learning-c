#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("---------------------------------------------- \n");
    printf("-- Conversion of degrees Fahrenheit to Celsius -- \n");
    printf("---------------------------------------------- \n");
    while (fahr <= upper) {
        celsius = (fahr - 32) / (9.0/5.0);
        printf("Fº%3.0f\t Cº%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}