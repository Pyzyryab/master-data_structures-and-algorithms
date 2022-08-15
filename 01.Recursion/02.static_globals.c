/* This example ilustrates how recursion algorithms deals and works
    with static and/or global variables
*/

#include <stdio.h>

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    int r;
    r = fun (5);
    printf("%d", r);

    r = fun(5);
    printf("\n%d", r);

    return 0;
}
