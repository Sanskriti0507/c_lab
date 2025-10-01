#include<stdio.h>

void count(){
static int c = 0;
c++;
printf("c = %d\n", c);
}

int main(){
count();
count();
count();
return 0;
}

