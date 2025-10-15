#include <stdio.h>

int largesmall(int a, int b, int c, int *large, int *small){
*large = (a > b ? (a > c ? a : c) : (b > c ? b : c));
*small = (a < b ? (a < c ? a : c) : (b < c ? b : c));
}

int main(){
int a, b, c;
int large, small;

printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);

largesmall(a, b, c, &large, &small);

printf("Largest: %d", large);
printf("Smallest: %d", small);

return 0;
}