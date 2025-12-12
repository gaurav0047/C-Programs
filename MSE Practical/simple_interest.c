#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter duration in years: ");
    scanf("%f", &time);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    if (principal < 0 || time < 0 || rate < 0)
        printf("Invalid input! All values must be non-negative.\n");
    else {
        simpleInterest = (principal * rate * time) / 100;
        printf("Simple Interest = %.2f\n", simpleInterest);
    }

    return 0;
}
