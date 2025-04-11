#include <stdio.h>
#include <stdbool.h>

void sieve(int limit) {
    bool prime[limit + 1];
    for (int i = 0; i <= limit; i++) prime[i] = true;

    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= limit; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= limit; i += p)
                prime[i] = false;
        }
    }

    printf("Primes up to %d:\n", limit);
    for (int i = 2; i <= limit; i++) {
        if (prime[i])
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    sieve(n);
    return 0;
}

// Output:
// Enter upper limit: 30  
// Primes up to 30:  
// 2 3 5 7 11 13 17 19 23 29
