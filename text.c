#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int main()
{
    int a[10];
    int i;
    int x;
    x = 5;
    for (i = -1; i < 11; i++)
    {
        a[i] = 034;
    }
    assert(x == 5);
    return 0;
}