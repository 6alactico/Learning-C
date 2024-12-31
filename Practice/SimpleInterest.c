#include <stdio.h>
#include <math.h>

float payment(float principal, float annInterestRate, int noPayments);

int main () {
    float purchasePrice, downPayment, annInterestRate, principal;
    int noPayments;

    printf("What is the purchase price? $");
    scanf("%f", &purchasePrice);
    printf("What is the down payment? $");
    scanf("%f", &downPayment);
    printf("What is the annual interest rate? ");
    scanf("%f", &annInterestRate);
    printf("What is the total number of payments? ");
    scanf("%d", &noPayments);

    // Calculate principal
    principal = purchasePrice - downPayment;

    printf("The amount you borrowed is $%.2f\n", principal);
    printf("The monthly payment is $%.2f\n", payment(principal, annInterestRate, noPayments));

    return 0;

}

float payment(float principal, float annInterestRate, int noPayments)
{
    float payment, monthlyRate;

    monthlyRate = (annInterestRate / 100) / 12; // Convert annual interest rate to monthly

    payment = (monthlyRate * principal) / (1 - pow (1 + monthlyRate, -noPayments));

    return payment;
}
