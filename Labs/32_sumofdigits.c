#include<stdio.h>

int sumofdigits(int n){
    if (n == 0){
        return 0;
    }
    return n % 10 + sumofdigits(n / 10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);

    printf("Sum of digits of %i is %i", n, sumofdigits(n));
}