#include <stdio.h>


int main(){
int d;
int c = 1;
printf("Enter an integer : ");
scanf("%i", &d);
printf("\n");

    for(int i = 1; i <= d; i++){
        c *= i;
        
    }
        printf("the factoriel of %d is %d \n", d, c);
        return 0;
    }
    
