#include <stdio.h>

int subtract(int a, int b);
int add(int a, int b);
int multiply(int a, int b);


int main(){
    int d;
    int i;
    int p;
    
    printf("1: subtraction\n");
    printf("2: addition\n");
    printf("3: multiplication\n\n");
    printf("Select function: ");
    scanf("%d", &d);
    printf("Enter the first number: ");
    scanf("%d", &i);
    printf("Enter the second number: ");
    scanf("%d", &p);
    
     if(d == 1){
        printf("the result is : %d", subtract(i, p));
    }
    
     if(d == 2){
        printf("the result is : %d", add(i, p));
    }
    
     if(d == 3){
        printf("the result is : %d", multiply(i, p));
    }
    
return 0;
}

int subtract(int a, int b){
    return a - b;
}

int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a * b;
}
