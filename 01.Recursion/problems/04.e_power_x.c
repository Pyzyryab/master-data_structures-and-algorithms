/**
 * @brief Evaluation of the `Taylor series`
 * @file 04.e_power_x.c
 * @author Alex Vergara (pyzyryab@tutanota.com)
 * @version 0.1.0
 * @date 2022-09-05
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>


/**
 * @brief Calculates `e^x` using the Taylor series but in 
 * a iterative version.
 */
double e_iterative(int x, int n)
{
    double s = 1, num = 1, den = 1;

    for (int i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }

    return s;
}

/**
 * @brief Calculates `e^x` using the Taylor series but with the
 * Horner's rule variant.
 * 
 * This version it's quite more efficient, due to the aggrupattion
 * of products in the calculation of the factorial of n on the divisor.
 * 
 * Time and space complexity it's O(n).
 */
double e_taylor_horner(int x, int n)
{
    static double s;

    if (n == 0)
        return s;

    s = 1 + x * s / n;
    return e_taylor_horner(x, n - 1);
}

/**
 * @brief Calculates `e^x` using the Taylor series approach.
 * 
 * The number of multiplications (on the denominator for the factorials)
 * is O(n²)
 */
double e_taylor(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;

    r = e_taylor(x, n-1);
    p = p*x;
    f = f*n;

    return r + p/f;
}

// Drive code
int main(int argc, char const *argv[])
{
    printf("e taylor: %lf \n", e_taylor(4, 15));
    printf("e taylor horner: %lf \n", e_taylor_horner(4, 15));
    printf("e iterative: %lf \n", e_iterative(4, 15));
    return 0;
}
