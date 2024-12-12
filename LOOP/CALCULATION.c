#include <stdio.h>


int add(int a, int p);
int difference(int m, int c);
int product(int k, int v);

int main() {
    int choice;
    int num1, num2;

    printf("1: Sum of two numbers\n");
    printf("2: Difference of two numbers\n");
    printf("3: Product of two numbers\n");
    printf("<0: Terminate the program\n");

    while (1) {
        printf("Select calculation: ");
        scanf("%d", &choice);


        if (choice < 0) {
            printf("Terminating the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);


        if (choice == 1) {
            printf("The result is: %d\n", add(num1, num2));
        } else if (choice == 2) {
            printf("The result is: %d\n", difference(num1, num2));
        } else if (choice == 3) {
            printf("The result is: %d\n", product(num1, num2));
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


int add(int a, int p) {
    return a + p;
}

int difference(int m, int c) {
    return m - c;
}

int product(int k, int v) {
    return k * v;
}
