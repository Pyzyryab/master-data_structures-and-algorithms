/**
 * @brief Calculation for the `n` term of the Fibonacci series
 * @file 05.fibonacci_series.c
 * @author Alex Vergara (pyzyryab@tutanota.com)
 * @version 0.1.0
 * @date 2022-09-10
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>

/**
 * @brief Calculates the nth number in the Fibonacci series
 * with the most basic recursive implementation of the series.
 * 
 * @param n the target number object of the calculation
 * 
 * The time complexity of this function it's approximatly O(2^n)
 */
int basic_fib(int n)
{
    if (n <= 1)
        return n;
    return basic_fib(n-2) + basic_fib(n-1);
}

/**
 * @brief Iterative variant for the calculus of the nth element
 * in the Fibonacci series. Time complexity for this one is O(n)
 * 
 * @param n the target number object of the calculation 
 * @return int the value for the nth element in the Fibonacci series
 */
int iterative_fib(int n)
{
    int t0 = 0;
    int t1 = 1;
    int s = 0;

    if (n <= 1)
        return n;

    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}


/**
 * @brief Most performant version for the calculus of the nth term,
 * utilizing the technique of `memoization`, utilizing a global
 * array of premade calculations for some n terms, reducing the
 * time complexity to O(n)
 * 
 * @param n the target number object of the calculation 
 * @return int the value for the nth element in the Fibonacci series
 */
// For the memoization technique, we need a 'global' array to store
// some calculus in order to reduce the time complexity.
int F[10];
int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n-2] == -1)
            F[n-2] = mfib(n-2);
        if (F[n-1] == -1)
            F[n-1] = mfib(n-1);

        return F[n-2] + F[n-1];
    }
}



// Driver code
int main(int argc, char const *argv[])
{
    printf("Basic Fibonacci impl: %d\n", basic_fib(8));
    printf("Iterative Fibonacci impl: %d\n", iterative_fib(8));

    
    // Initialize the global array memory positions for F
    for (int i = 0; i < 10; i++) 
        F[i] = -1;
    printf("Fibonacci impl: %d\n", mfib(8));

    
    return 0;
}
