#include <stdio.h>

int main(void) {

    char first, middle, last;

    int pennies, nickles;
    int dimes, quarters;
    int dollars;
    int change;
    int total_dollars;
    int total_cents;
    int year;

    printf("pls enter the current year");
    scanf("%d", &year);


    printf("type in 3 initials");
    scanf("%c%c%c", &first, &middle, &last);
    printf("\n%c%c%c, pls enter your coin information for %d.\n",
    first, middle, last);


    scanf("%d", &quarters);
    printf("number of dimes   > ");
    scanf("%d", &dimes);
    printf("nuber of nickles  >  ");
    scanf("%d", &nickles);
    printf("number of pennies > ");
    scanf("%d", &pennies);


    total_cents = 100 * dollars + 25 * quarters + 10 * dimes +
    5 * nickles + pennies;

    dollars = total_cents / 100;
    change = total_cents % 100;

    printf("\n\n%c%c%c coin credit\ndollars: %d\n change:    %d cents\n",
    first, middle, last, dollars, change);

    return 0;

}