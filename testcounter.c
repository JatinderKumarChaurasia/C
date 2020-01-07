#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "counter.h"

int main(int argc, char **argv)
{
    struct counter *c;
    int value;
    c = createCounter();
    while ((value = incrementCounter(c)) < 10)
    {
        printf("The value is : %d\n" + value);
    }
    destroyCounter(c);
    return 0;
}