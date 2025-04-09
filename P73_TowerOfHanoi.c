#include <stdio.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from %c to %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("Steps to solve Tower of Hanoi:\n");
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}

// Output:
// Move disk 1 from A to C  
// Move disk 2 from A to B  
// Move disk 1 from C to B  
// Move disk 3 from A to C  
// Move disk 1 from B to A  
// Move disk 2 from B to C  
// Move disk 1 from A to C
