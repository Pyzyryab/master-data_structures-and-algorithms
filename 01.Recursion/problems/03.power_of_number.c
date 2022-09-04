/**
 * @brief Demonstration of how to solve the problem of calculate
 * the power of a number
 * @file 03.power_of_n.cpp
 * @author Alex Vergara (pyzyryab@tutanota.com)
 * @version 0.1.0
 * @date 2022-09-04
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>

/**
 * @brief Calculates the power of a number m, to the exponent the defined as n
 * 
 * @param m base
 * @param n exponent
 * @return int 
 */
int pow2(int m, int n)
{
    if (n == 0)
        return 1;
    return pow2(m, n-1) * m;
}

/**
 * @brief Performant version of the `pow(m, n)`defined above
 * 
 * @param m base
 * @param n exponent
 * @return int 
 */
int power2(int m, int n)
{
    if (n == 0)
        return 1;
    
    if (n % 2 == 0)
        return power2(m*m, n/2);
    else
        return m * power2(m*m, (n-1)/2);
}


// Driver code
int main(int argc, char const *argv[])
{
    int r;
    int m = 2; 
    int n = 9;
    r = power2(m, n);
    printf("Power of %d raised to %d: %d\n", m, n, r);
    return 0;
}
