/**
 * @brief Demonstration of how to code a function that calculates the factorial
 * of a given number N using recursion
 * 
 * @file 02.factorial_of_number.c
 * @author Alex Vergara (pyzyryab@tutanota.com)
 * @version 0.1.0
 * @date 2022-08-15
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>


/**
 * @brief calculates the factorial of a number N.
 * 
 * Time and space complexity for this function is determined by
 * the input parameter n, because it will be necessary n + 1 opereations
 * to perform the calculus. So time and space complexity will be defined
 * as O(n) 
 */
unsigned long long fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}

/**
 * @brief iterative version for the calculation of the factorial of a
 * number n
 */
unsigned long long i_fact(int n)
{
    unsigned long long f = 1;
    for (int i = 0; i < n; i++)
        f = f * i;

    return f;
}


// Driver code
int main(int argc, char const *argv[])
{
    unsigned long long r;
    unsigned long long r_i;
    int v = 25;

    r = fact(v);
    printf("(Recursive) Factorial of %d is %lld", v, r);

    r_i = i_fact(v);
    printf("\n(Iterative) Factorial of %d is %lld", v, r);

    return 0;
}
