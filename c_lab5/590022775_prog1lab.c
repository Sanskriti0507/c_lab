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

int largest=arr[0];
int seclargest=arr[0];

for(int i = 1; i <n ; i++){
	if(arr[i] > largest){
	seclargest = largest;
	largest = arr[i];
	}
	else if(arr[i] > seclargest && arr[i] < largest){
	seclargest = arr[i];
	}
}

printf("Second largest element is %d\n", seclargest);
return 0;
}
