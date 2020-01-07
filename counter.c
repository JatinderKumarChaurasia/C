#include <stdlib.h>
#include <assert.h>

#include "counter.h"

struct counter
{
    int count;
};

struct counter *createCounter(void)
{
    struct counter *c;
    c = malloc(sizeof(struct counter));
    assert(c);
    c->count = 0;
    return c;
}

void destroyCounter(struct counter *c)
{
    free(c);
}

int incrementCounter(struct counter *c)
{
    return ++(c->count);
}
void main() {}