#include<stdio.h>

int main(){
int x = 187;
printf("x = %d\n", x);

{
int y = 26;
printf("Inside block: y = %d\n", y);
}

printf("%d", y); // doesnt print outside the block because y is declared inside the block.
 
return 0;
}

