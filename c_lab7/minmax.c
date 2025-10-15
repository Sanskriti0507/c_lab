#include<stdio.h>

int largest(int a, int b, int c){
if (a > b && a > c)
return a;
else if (b > c)
return b;
else
return c;
}

int smallest(int a, int b, int c){
if (a < b && a < c)
return a;
else if (b < c)
return b;
else
return c;
}


int main(){
int a, b, c;

printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);

printf("largest number: %d\n", largest(a, b, c));

printf("smalest number: %d\n", smallest(a, b, c));

return 0;
}

