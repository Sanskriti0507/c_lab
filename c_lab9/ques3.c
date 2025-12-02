#include<stdio.h>

struct employee{
char employee_name[20];
int pay;
};

int main(){
struct employee x[10];


for(int i=1; i<=10; i++){
printf("Employee name: \n");
scanf("%s", x[i].employee_name);

printf("Basic pay: \n");
scanf("%d", &x[i].pay);
}

float dA;
float gross;

for(int i=1; i<=10; i++){
dA= 0.52 * x[i].pay;
gross = dA + x[i].pay;

printf("%s\t%f\n", x[i].employee_name, gross);
}

return 0;
 	 	
}

