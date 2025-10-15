#include<stdio.h>

int main(){
int a, b;
char operator;
char input;

do{

printf("Do you want to use the calculator? (y/n)");
scanf(" %c", &input);

if (input == 'n' || input == 'N') {
printf("Exiting program.\n");
break;
}

printf("Enter first number: ");
scanf("%d", &a);

printf("Enter second number: ");
scanf("%d", &b);

printf("Enter operator (+,-,*,/): ");
scanf(" %c", &operator);

int result;

switch (operator) {
case '+':
result=a+b;
printf("The sum is %d\n", result);
break;

case '-':
result=a-b;
printf("The difference is %d\n", result);
break;

case '*':
result=a*b;
printf("The product is %d\n", result);
break;

case '/':
if (b != 0){
result=a/b;
printf("Dividing a by b gives %d\n", result);
}
else{
printf("Invalid");
}
break;

default:
printf("Enter valid operator\n");
}

} while(input == 'y' || input == 'Y');

return 0;

}

