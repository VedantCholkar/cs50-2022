#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();
    // printf("%i\n", cents);

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;
    // printf("%i\n", cents);

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;
    // printf("%i\n", cents);

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;
    // printf("%i\n", cents);

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;
    // printf("%i\n", cents);

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;
    // printf("%i\n", cents);

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    printf("Enter cents: ");
    cents = scanf("%i", &cents);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters_needed;
    while (cents > 25)
    {
        cents -= 25;
        quarters_needed++;
    }
    return quarters_needed;
}

int calculate_dimes(int cents)
{
    int dimes_needed;
    while (cents > 10)
    {
        cents -= 10;
        dimes_needed++;
    }
    return dimes_needed;
}

int calculate_nickels(int cents)
{
    int nickels_needed;
    while (cents > 5)
    {
        cents -= 5;
        nickels_needed++;
    }
    return nickels_needed;
}

int calculate_pennies(int cents)
{
    int pennies_needed;
    while (cents > 1)
    {
        cents -= 1;
        pennies_needed++;
    }
    return pennies_needed;
}