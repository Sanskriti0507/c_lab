#include <stdio.h>

int isPrime(int num){
    if(num < 2) return 0;

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int low, high;

    printf("Enter lower limit: ");
    scanf("%d", &low);

    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Prime numbers between %d and %d are:\n", low, high);

    for(int i = low; i <= high; i++){
        if(isPrime(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
