#include<stdio.h>

#define largest(a, b, c) ((a > b && a > c) ? a : (b > c ? b : c))
#define smallest(a, b, c) ((a < b && a < c) ? a : (b < c ? b : c))

int main(){
int a, b, c;

printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);

printf("largest number: %d\n", largest(a, b, c));

printf("smallest number: %d\n", smallest(a, b, c));

return 0;
}

