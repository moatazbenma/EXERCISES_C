// Online C compiler to run C program online
#include <stdio.h>

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    printf(" ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("\n%d", ans);
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int greatest = a;
    for(int i = 0;i < 4; i++){
        if(b > greatest){
            greatest = b;
        }
        if(c > greatest){
            greatest = c;
        }
        if(d > greatest){
            greatest = d;
        }
    }
    return greatest;
}