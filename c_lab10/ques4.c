#include<stdio.h>

union address{
char name[30];
char home_address[50];
char hostel_address[40];
char city[20];
char state[20];
char zip[20];
};

int main(){

union address x;

printf("Present address:");
scanf("%[^\n]", x.home_address);

printf("Present address: %s", x.home_address);

return 0;

}
