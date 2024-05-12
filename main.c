#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using a loop
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d is %llu\n", num, factorial);

    return 0;
}