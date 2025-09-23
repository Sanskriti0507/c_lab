#include<stdio.h>

int main(){
int a, b, mult = 0;
int i;

printf("Enter two numbers:");
scanf("%d\n%d", &a, &b);

for(i = 0; i<b; i++){
mult = mult + a;
}

printf("Res = %d", mult);
return 0;
}
