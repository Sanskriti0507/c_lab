#include<stdio.h> 

int GCD(int a, int b){
	if(b == 0){
		return a;
	}
	else{
		return GCD(b, a%b);
	}
}

int main(){
int n1, n2;

printf("Enter 1st number: ");
scanf("%d", &n1);

printf("Enter 2nd number: ");
scanf("%d", &n2);

int gcd;
gcd = GCD(n1,n2);

printf("The Gcd of %d and %d is %d", n1, n2, gcd);

return 0;
}


