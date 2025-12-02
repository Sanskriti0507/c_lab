#include<stdio.h>

int main(){
int a,b,c,d;

printf("Enter no. of rows and columns for matrix A (a b):\n");
scanf("%d %d", &a, &b);

printf("Enter no. of rows and columns for matrix B (c d):\n");
scanf("%d %d", &c, &d);

if(b!=c){
printf("Multiplication not possible. <No. of columns of matrix A must be equal to the no. of rows of matrix B.\n");
return 0;
}

int A[a][b], B[c][d], C[a][d];

printf("Elements of matrix A:\n");
for(int i=0; i<a;i++){
	for(int j=0;j<b;j++){
	scanf("%d", &A[i][j]);
	}
}

printf("Elements of matrix B:\n");
for(int i=0; i<c;i++){
	for(int j=0;j<d;j++){
	scanf("%d", &B[i][j]);
	}
}

for(int i=0; i<a;i++){
	for(int j=0;j<d;j++){
	C[i][j]=0;
		for(int k=0;k<b;k++){
		C[i][j] += A[i][k] * B[k][j];
		}
	}
}

printf("The result is:\n");
for(int i=0;i<a;i++){
	for(int j=0;j<d;j++){
	printf("%d ", C[i][j]);
	}
	printf("\n");
}


return 0;
}

