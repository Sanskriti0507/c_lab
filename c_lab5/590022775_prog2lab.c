#include<stdio.h>

int main(){

int n;
printf("Enter the number of elements= ");
scanf("%d", &n);

int arr[n];

printf("Enter %d integers: ", n);
for(int i = 0; i <= n-1; i++){
scanf("%d", &arr[i]);
}


int pos = 0;
int neg = 0;
int even = 0;
int odd = 0;

printf("\nPositive numbers: ");
for(int i = 0; i < n; i++){
	if(arr[i]>0){
	printf("%d ", arr[i]);
	pos++;
	}
}

printf("\nNegative numbers: ");
for(int i = 0; i < n; i++){
	if(arr[i]<0){
	printf("%d ", arr[i]);
	neg++;
	}
}

printf("\nEven numbers: ");
for(int i = 0; i < n; i++){
	if(arr[i]%2 == 0){
	printf("%d ", arr[i]);
	even++;
	}
}

printf("\nOdd numbers: ");
for(int i = 0; i < n; i++){
	if(arr[i]%2 != 0){
	printf("%d ", arr[i]);
	odd++;
	}
}



printf("\nNo. of Positive numbers: %d", pos);
printf("\nNo. of Negative numbers: %d", neg);
printf("\nNo. of Even numbers: %d", even);
printf("\nNo. of Odd numbers: %d\n", odd);

return 0;
}
