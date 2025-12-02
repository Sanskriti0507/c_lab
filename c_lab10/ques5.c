#include<stdio.h>

int main(){
int a=5;
float b=5.5;
char c='s';

int *ip=&a;
float *fp=&b;
char *cp=&c;


printf("int pointer:\naddress = %p, value = %d\n", ip, *ip);
printf("float pointer:\naddress = %p, value = %f\n", fp, *fp);
printf("char pointer:\naddress = %p, value = %c\n", cp, *cp);

return 0;
}
