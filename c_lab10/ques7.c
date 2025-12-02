#include<stdio.h>

int modify(int *x, int *y){
	*x=*x+5;
	*y=*y+5;
}
int main(){

int x=5;
int y=2;

printf("Before function call:\n");
printf("x=%d\ny=%d\n", x, y);

modify(&x,&y);

printf("After function call:\n");
printf("x=%d\ny=%d\n", x, y);

return 0;
}

