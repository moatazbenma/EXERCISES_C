#include <stdio.h>

void change(int *b);

int main() {
int a;
    printf("Enter the number x: ");
    scanf("%d", &a);
    printf("In the main program: %d\n", a);
    change(&a);
    printf("In the main program: %d\n", a);
}

void change(int *b){
    int change =  *b + 3;
    printf("In the subroutine: %d\n", change);
}