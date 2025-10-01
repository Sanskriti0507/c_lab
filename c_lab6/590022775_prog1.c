#include<stdio.h>

int n = 78;

void local(){
printf("Inside local(): %d\n", n);
}

int main(){
printf("Inside main(): %d\n", n);
local();

return 0;
}

