#include<stdio.h>

int fibonacci(int n){
if(n == 0){
return 0;
}
if(n == 1){
return 1;
}

return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
int n;

printf("Enter a number: ");
scanf("%d", &n);

for(int i = 0; i<=n; i++){
printf("F(%d) = %d\n", i, fibonacci(i));
}

return 0;
}