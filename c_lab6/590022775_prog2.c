#include<stdio.h>

int g = 78;

void local(){
int l = 90;
printf("Inside local(): l = %d\n", l);
printf("Inside local(): g = %d\n", g);
}

int main(){
local();
printf("Inside main(): g = %d\n", g);
printf("%d", l); //doesnt print because l is a local variable

return 0;
}

