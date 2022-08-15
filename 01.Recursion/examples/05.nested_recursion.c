// Example of nested recursion, where a recursive call takes another
// recursive call as a paramenter

#include <stdio.h>


int fun(int n)
{
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));
}


int main(int argc, char const *argv[])
{
    int r;
    r = fun(95);
    printf("%d\n", r);
    return 0;
}
