#include <cs50.h>
#include <stdio.h>

int quarter(int q);
int dime(int d);
int nickel(int n);
int main(void)
{
    int change, coins;

    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 1);

    int quarter_amount = quarter(change);
    change = change - (25 * quarter_amount);

    int dime_amount = dime(change);
    change = change - (10 * dime_amount);

    int nickel_amount = nickel(change);
    change = change - (5 * nickel_amount);

    coins = quarter_amount + dime_amount + nickel_amount + change;

    printf("%i\n", coins);
}

int quarter(int q)
{
    return q / 25;
}

int dime(int d)
{
    return d / 10;
}

int nickel(int n)
{
    return n / 25;
}
