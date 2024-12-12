#include <stdio.h>

int main() {
    int n;          
    float hours;    
    float total = 0; 
    
    printf("The program calculates the total hours worked during\nspecific period and the average length of a day.\n\n");
    
    printf("How many days: ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; i++) {
        printf("Enter the working hours for day %d: ", i);
        scanf("%f", &hours);
        total += hours; 
    }
    
  
    float average = total / n;

   
    printf("\nTotal hours worked: %.1f\n", total);
    printf("Average length of day: %.1f\n", average);

    return 0;
}
