#include <stdio.h>

int main(void)
{
    // *p++ = *(p++) -> Value of espression is *p (value), incriment p (address) later
    // (*p)++        -> Value of expression is *p (value), incriment *p (value) later
    // *++p = *(++p) -> Incriment p (address), value is *p (value) one address more
    // ++*p = ++(*p) -> Incriment *p (value), *p (value) + 1 to value pointed by p

    // for an array a:
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    // we can use a for loop like this
    // for (int *p = a; p < a + 10; p++) 
    // {
    //     printf("%d\n", *p);
    // }

    // pointer addition is communative
    // the compiler treats i[a] as *(i + a) which is the same as *(a + i)
    for (int i = 0; i < 10; i++)
        printf("%d ", i[a]);
    puts("");


    return 0;
}
