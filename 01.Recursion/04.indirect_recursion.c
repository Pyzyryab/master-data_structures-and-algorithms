// Example of indirect recursion, where more than one funcion performs
// recursive calls between them in a circular fashion

#include <stdio.h>

// Prototype for fun_b
void fun_b(int n);



void fun_a(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun_b(n - 1);
    }
}


void fun_b(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun_a(n / 2);
    }
}


int main(int argc, char const *argv[])
{
    fun_a(20);
    return 0;
}
