#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, fact = 1;  //Use long long if you want to calculate factorials of larger numbers (though it will consume more memory)

    while (true) {
        printf("Enter a number to find its factorial: ");
        scanf("%d", &num);
        if (num < 0) {
            printf ( "Factorial is not defined for negative numbers.\n");
            continue;
        } else if (num == 0 || num == 1) {
            printf ("Factorial of %d is: 1\n", num);
            continue;
        } else {
            for (int i = 1; i <= num; i++) {
                fact *= i;
            }
            printf ("Factorial of %d is: %d\n", num, fact);
        }

        printf ("Do you want to try again? (y/n): ");
        char choice;
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N') {
            printf ("Exiting the program.\n");
            return 0;
        } else if (choice != 'y' && choice != 'Y') {
            printf ("Invalid choice. Exiting the program.\n");
            return 0;
        } else {
            fact = 1;
            continue;
        }
    }
    return 0;
}