#include <stdio.h>

int main() {
    int units;
    float bill = 0.0, interest, total;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.0;
    } else if (units <= 200) {
        bill = (100 * 1.0) + ((units - 100) * 2.0);
    } else if (units <= 300) {
        bill = (100 * 1.0) + (100 * 2.0) + ((units - 200) * 3.0);
    } else {
        printf("This program handles only up to 300 units.\n");
        return 1;
    }

    
    interest = bill * 0.02;
    total = bill + interest;

    printf("Electricity Bill before interest: ₹%.2f\n", bill);
    printf("Interest (2%%): ₹%.2f\n", interest);
    printf("Total Bill (including interest): ₹%.2f\n", total);

    return 0;
}