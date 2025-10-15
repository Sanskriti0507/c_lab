#include<stdio.h>

int reverse(int arr[], int n){
printf("reverse:\n");
for(int i=n-1;i>=0;i--){
printf("%d ", arr[i]);
}
printf("\n");
}

int main(){
int n;
int arr[10];

printf("Enter how many numbers (n<=10): ");
scanf("%d", &n);

if (n>10 || n<=0){
printf("enter between 1 and 10.\n");
return 1;
}

printf("Enter %d integers:\n", n);

for(int i=0;i<n;i++){
scanf("%d", &arr[i]);
}

reverse(arr, n);

return 0;
}

