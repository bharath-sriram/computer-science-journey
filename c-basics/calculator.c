#include <stdio.h>
#include <math.h>

float add(float a, float b){
    return a+b;
}

float subtract(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return a*b;
}

float divide(float a, float b){
    if (b!=0){
        return a/b;
    } else{
        printf("Division by Zero, ERROR!\n");
        return 0;
    }
}

float rise_to_power(float a, float b){
    return pow(a,b);
}

float square_root(float a){
    return sqrt(a);
}

int main(){
    int choice;
    float num1, num2, num;
    char repeat = 'y';

    printf("Basic-Calculator\n");
    printf("If calculating with decimal point, make sure that the maximum digits after the decimal point is 3.\n");
    
    while (repeat == 'y'||repeat == 'Y'){
        printf("Choose the operations:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Division\n5. Rise to power\n6. Square root\n");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5){
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);

            switch (choice){
                case 1:
                    printf("Result = %.3f\n", add(num1, num2));
                    break;
                case 2:
                    printf("Result = %.3f\n", subtract(num1, num2));
                    break;
                case 3:
                    printf("Result = %.3f\n", multiply(num1, num2));
                    break;
                case 4:
                    printf("Result = %.3f\n", divide(num1, num2));
                    break;
                case 5:
                    printf("Result = %.3f\n", rise_to_power(num1, num2));
                    break;
            }        
        } else if (choice == 6){
            printf("Enter a number to find out its square root: ");
            scanf("%f", &num);
            if (num < 0){
                printf("Input number should be greater than 0.\n");
            } else{
                printf("Result = %.2f\n", square_root(num));
            }
        } else{
            printf("Invalid choice.\n");
        }
        printf("Do you want to continue?");
        scanf("%c", &repeat);

    }
    printf("Goodbye!\n");
    return 0;
}