#include <stdio.h>
 long long fibo(int n){
     
     if(n<=1) return n;
     
     return fibo(n-1)+ fibo(n-2);
 }


int main(){
    int n;
    printf("digite um numero : ");
    scanf("%d", &n);
    printf("Fibonacci = %d resultado da sequência: %lld\n",n, fibo(n) );
    
    return 0;
}
