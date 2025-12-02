#include<stdio.h>

int main(){
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("a & b  (AND) = %d\n", a & b);
    printf("a | b  (OR)  = %d\n", a | b);
    printf("~a     (NOT) = %d\n", ~a);
    printf("~b     (NOT) = %d\n", ~b);

    return 0;
}

