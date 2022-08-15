
/**
 * @brief Ilustrates three different ways of performing a code solution 
 * for the calculus of the sum of the first `n` natural numbers for a given number.
 *
 * @file sum_naturals.c
 * @author Alex Vergara (pyzyryab@tutanota.com)
 * @version 0.1.0
 * @date 2022-08-15
 */

#include <stdio.h>


/**
 * @brief Approach for perform the calculus of the first n natural numbers
 * for a given number in a recursive approach
 * 
 * Space complexity for this variant is high, due to the intense use of the
 * stack for the recursive calls, but in the end, there's only n + 1 calls
 * for a given number n, so the space complexity is determined by
 * n + 1, which leads to a 0(n) complexity.
 * 
 * Time complexity is O(n), because we can determinate that n + 1 calls are
 * needed for perform such operation, so the time is O(n)
 */
int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}

/**
 * @brief sum of the first n natural numbers for a given number using procedures
 * like loops.
 * 
 * Simple loop for perform the calculus has a O(n) time complexity. 
 */
int sum_with_loop(int n)
{
    int t, s = 0;

    for (int i = 0; i <= n; i++)
        s = s + i;

    return s;
}


/**
 * @brief calculates the sum of the first n natural numbers for a given number
 * using the classical math formula [n * (n + 1) / 2].
 * 
 * The time complexity for this function is constant time O(1), due to
 * is just had to perform 3 operations to obtain the solution.
 * 
 * A concrete value for the number of operations to perform implies constant time.
 * 
 * Due to the constant time, this is the faster way of the three persented.
 */
int sum_with_formula(int n)
{
    return n*(n + 1)/2;
}


// Driver coede
int main(int argc, char const *argv[])
{
    int r, v = 5;
    r = sum(v);
    printf("Sum of the first %d natural numbers is %d", v, r);
    return 0;
}
