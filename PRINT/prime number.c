#include <stdio.h>



int main(){
    int c;
    int b;
    
    printf("Enter the first number:  ");
    scanf("%i", &c);
    printf("Enter the second number: ");
    scanf("%i", &b);

    printf("%i + %i = %i\n", c, b, c + b);
    printf("%i - %i = %i\n", c, b, c - b);
    printf("%i * %i = %i\n", c, b, c * b);

}