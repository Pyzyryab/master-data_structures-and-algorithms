/**
 * @brief Combination formula (also known as selection formula). If a set ob
 * objects are given to us, then we can calculate in how many ways we can select
 * a subset of those objects.
 * 
 * P. ej. if some letters of the alphabet is given to us, like 'A, B, C, D, E, F, G',
 * total of 7 elements, in how many ways we can take a subset of, p.ej.,
 * 3 elements, like A,B,C, A,B,D, A,B,E and so on and so forth.
 * 
 * Note that the order of the elements in already made combinations not counts
 * as a variation. A,B,D == A,D,B.
 * 
 * Formula is: nCr = n! / r!(n-r)!
 * So, for a value of 5 for n, terms are => 5C 0-5 = 5C0 5C1 5C2...5C5
 * 
 * @file 06.ncr.c
 * @author Alex Vergara (pyzyryab@tutanota.com)
 * @version 0.1.0
 * @date 2022-09-10
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>

/**
 * @brief Calculus of the number of possible subsets for a selection
 * of elemnts in a recursive approach.
 * 
 * This operation has a time complexity of O(n)
 */
int nCr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else
        return nCr(n-1, r-1) + nCr(n-1, r);
}

// Driver code
int main(int argc, char const *argv[])
{
    printf("nCr: %d\n", nCr(5, 4));
    return 0;
}
