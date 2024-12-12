#include <stdio.h>

int main() {
    int c = 0;  
    int v = 0; 
    int m;     

    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");

    while (1) {
        printf("Enter score (4-10): ");
        scanf("%d", &m);

        if (m < 0) {
            break; // Exit the loop on negative input
        }

        if (m >= 4 && m <= 10) {
            v += m; 
            c++;    
        } else {
            printf("Invalid score! Please enter a number between 4 and 10.\n");
        }
    }

    if (c > 0) {
        float average = (float)v / c; // Calculate average
        printf("You entered %d scores.\n", c);
        printf("Average score: %.2f\n", average);
    } else {
        printf("No valid scores were entered.\n");
    }

    return 0;
}
