#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime

    for (int i = 2; i * i <= num; i++) { // Optimized loop (√num)
        if (num % i == 0) 
            return 0; // Found a divisor, not prime
    }
    return 1; // Prime number
}

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) { 
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num)); // Print result (1 for prime, 0 for not prime)
    }

    return 0;
}
