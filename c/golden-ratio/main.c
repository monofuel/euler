#include <stdio.h>

// fibonacci numbers
// n-2 + n-1 added together
// 1 1 2 3 5 8 13

// golden ratio
// dividing a fibonacci number by it's previous number approaches the golden ratio

int main(int argc, char *argv[])
{
    printf("====\n");

    long n_2 = 1;
    long n_1 = 1;
    long next = 0;
    double ratio = 0;

    printf("= fib: %ld\n", n_2);
    printf("= fib: %ld\n", n_1);

    for (int i = 0; i < 15; i++)
    {
        next = n_2 + n_1;
        n_2 = n_1;
        n_1 = next;
        ratio = n_1 / (double)n_2;
        printf("= fib: %ld\n= ratio: %f\n", next, ratio);
    }

    printf("====\n");
}