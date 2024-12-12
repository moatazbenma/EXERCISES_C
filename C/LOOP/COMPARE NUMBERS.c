#include <stdio.h>

// Function prototype
int mama(int a, int b);

int main() {
    int largest;
    int smallest;
    int a, b, c;

    // Input three numbers
    printf("Enter the 1. number: ");
    scanf("%d", &a);
    printf("Enter the 2. number: ");
    scanf("%d", &b);
    printf("Enter the 3. number: ");
    scanf("%d", &c);
    
    // Initialize largest and smallest with the first number
    largest = smallest = a;

    // Compare to find the largest
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    // Compare to find the smallest
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }

    // Call the function to print the result
    mama(largest, smallest);

    return 0; // Return from main
}

// Function to print the largest and smallest values
int mama(int a, int b) {
    printf("The largest was %i and the smallest was %i\n", a, b);
    return 0;
}
