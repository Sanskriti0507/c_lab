#include<stdio.h>
int main(){
int n;
int i, j, k;

for(i = 0; i < 4; i++){
	for(j = 0; j < 4 - i; j++){
	printf(" ");
	}
	n = 1;
	for(k = 0; k <= i; k++){
	       	printf("%d ", n);
		n = n * (i - k) / (k + 1);
	}
	printf("\n");
	} 
return 0;
}
