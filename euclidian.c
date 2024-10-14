#include <stdio.h>

// Function to calculate GCD using the Euclidean method
int gcd(int a, int b) {
    printf("\nCalculating GCD of %d and %d:\n", a, b);
    printf("-----------------------------------------------------\n");
    
    printf("%d mod %d = ", a, b);
    while (b != 0) {
        int remainder = a % b;
        
        // Print current step
        printf("%d\n", remainder);
        
        // Prepare for the next iteration
        a = b;
        b = remainder;
        
        // If b is not 0, print the next step
        if (b != 0) {
            printf("%d mod %d = ", a, b);
        }
    }

    printf("%d = GCD\n", a);
    printf("-----------------------------------------------------\n");
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    int result = gcd(num1, num2);

    // Output the result
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
