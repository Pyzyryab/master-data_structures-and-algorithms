// Example of "tree recusion"

#include <stdio.h>

// Tracks the n times the function `fun` will be called
int counter = 0;

/*
    Time complexity for tree recursion is O(2n)
    Space complexity for tree recursion is O(n)
*/
void fun(int n)
{
    counter++;
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
}


int main(int argc, char const *argv[])
{
    fun(3);
    printf("\nfun(int n) was called a total of: %d times", counter);
    return 0;
}
