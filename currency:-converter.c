#include <stdio.h>

void currencyConverter(float amount, int choice) {
    // Conversion rates (these are example rates, update with real-time values if needed)
    const float USD_TO_EUR = 0.85;
    const float USD_TO_GBP = 0.75;
    const float USD_TO_INR = 74.50;
    const float USD_TO_JPY = 110.00;
    const float USD_TO_AUD = 1.35;

    float convertedAmount;

    switch (choice) {
        case 1:
            convertedAmount = amount * USD_TO_EUR;
            printf("%.2f USD = %.2f EUR\n", amount, convertedAmount);
            break;
        case 2:
            convertedAmount = amount * USD_TO_GBP;
            printf("%.2f USD = %.2f GBP\n", amount, convertedAmount);
            break;
        case 3:
            convertedAmount = amount * USD_TO_INR;
            printf("%.2f USD = %.2f INR\n", amount, convertedAmount);
            break;
        case 4:
            convertedAmount = amount * USD_TO_JPY;
            printf("%.2f USD = %.2f JPY\n", amount, convertedAmount);
            break;
        case 5:
            convertedAmount = amount * USD_TO_AUD;
            printf("%.2f USD = %.2f AUD\n", amount, convertedAmount);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main() {
    float amount;
    int choice;

    printf("Welcome to the Currency Converter!\n");
    printf("Enter the amount in USD: ");
    scanf("%f", &amount);

    printf("Select the currency to convert to:\n");
    printf("1. Euro (EUR)\n");
    printf("2. British Pound (GBP)\n");
    printf("3. Indian Rupee (INR)\n");
    printf("4. Japanese Yen (JPY)\n");
    printf("5. Australian Dollar (AUD)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    currencyConverter(amount, choice);

    return 0;
}