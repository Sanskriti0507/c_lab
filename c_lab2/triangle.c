#include<stdio.h>
int main(){
int a, b, c;

printf("Enter value of side a:");
scanf("%d", &a);
printf("Enter value of side b:");
scanf("%d", &b);
printf("Enter value of side c:");
scanf("%d", &c);

if(a + b > c && b + c > a && c + a > b && a!= 0 && b != 0 && c != 0){
printf("The triangle is valid.\n");
}

if(a == b && b == c && c == a){
printf("It is an equilateral triangle.\n");
}

if(a != b && b != c && c != a && a!= 0 && b != 0 && c != 0){
printf("It is a scalene triangle.\n");
}

if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a){
printf("It is a right angle triangle.\n");
}

if(a == b || b == c || c == a){
printf("It is an isosceles triangle.\n");
}

else{
printf("Triangle is not valid.\n");
}

return 0;
}
