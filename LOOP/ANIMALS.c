#include <stdio.h>

void cat();
void dog();
void cow();

int main() {
    int m;

 
    printf("1: cat\n");
    printf("2: dog\n");
    printf("3: cow\n");
    printf("End with a negative number.\n");

    while (1) {
        printf("Select animal: ");
        scanf("%d", &m);

        if (m == 1) {
            cat();
        } else if (m == 2) {
            dog();
        } else if (m == 3) {
            cow();
        } else if (m < 0) {
            printf("Terminating the program...\n");
            break; 
        } else {
            printf("Invalid selection. Please try again.\n");
        }
    }

    return 0;
}


void cat() {
    printf("The cat says meow!\n");
}

void dog() {
    printf("The dog says wuff-wuff!\n");
}

void cow() {
    printf("The cow says moo!\n");
}
