#include <stdio.h>

// Function to check if a number is prime
int isPrime() {
    if (num <= 1) return 0; // 0 and 1 are not prime
    
    for (int i = 2; i * i <= num; i++) { // Optimized loop (√num)
        if (num % i == 0)
    }
    return 1; 
}

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) { 
        int num;
        scanf("%d", &num);
        isprime();

    }

    return 0;
}
