#include<stdio.h>
int main(){
int n = 1;
int i, j, k;

for(i = 1; i <= 3; i++){
for(j = 1; j <= 3-i; j++){
printf(" ");
}
for(k = 1; k <= i; k++){
printf("%d ", n);
n++;
}
printf("\n");
}
return 0;
}
