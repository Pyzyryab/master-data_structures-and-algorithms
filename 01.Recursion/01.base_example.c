// Recursion basic examples
#include <stdio.h>

/* Recursion example where an action it's done first,
   before the recursive call.

   This type of recursion is known as "Tail recursion"

*/
void fun1(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun1(n - 1);
    }

    /* Tail recursion it's easily convertible to a loop, so the code
       above can be rewritten as:
    
        while (n > 0)
        {
            printf("%d ", n);
            n--;
        }
    
    */
}


/* Recursion example where the recursive call it's performed before
   any action

   This example ilustrates the kind of recursion known as "head recursion".
   Head recursion means that the function doesn't have to process
   or perform any operation at calling time, so all the processing it's
   done at returning time.
*/
void fun2(int n)
{
    if (n >0)
    {
        fun2(n - 1);
        printf("%d ", n);
    }

    /* Head recursion presented above can be rewritten as a loop:

       int i = 1;
       while(i <= n)
       {
        printf("%d", i);
        i++;
       }
    */
}


// Driver code
int main()
{
    int x = 3;

    // Calls to the recursive example that performs the action before the recursion
    printf("Action first\n");
    fun1(x);

    // Calls to the recursive example that performs the recursive call before any action
    printf("\n\nRecusive call first\n");
    fun2(x);


    /*
        In general, we can define the structure of a recursive function by saying that the
        code executed BEFORE the recursive call, is called the ascending phase, and the code
        above the recursive call it's called at "calling time", and the code execute AFTER the
        recursive call statement it's executed at "returning time", in the descending phase.
    */
}