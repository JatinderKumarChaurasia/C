#include <stdio.h>
#include "utilscustom.h"
#include "declareSort.h"

DeclareSort(hello, int)

#define N (10)

    int main(int argc, char **argv)
{
    int i = 0;
    int n = 6;
    int a[N];
#if VERBOSITY >= 3 && defined(SAY_HI)
    Warning("%s:This Variable is Happy\n", argv[1]);
    FormatString("sks\n", "6,is Marking\n");
    printf("Square Sum is : %d\n", distSquared(2, 4));
    ForLoopPrint(i, 10) printf("%d\n", i);
    WhileLoop(i, n) printf("Hello While");
    puts("Hoood\n");
    StringAddition(2 + 3);
    printf("%d\n", NottringAddition(3));

    ForLoopPrint(i, N) { a[i] = N - i; }
    hello_sort(a, N);
    ForLoopPrint(i, N) { printf("%d\n", a[i]); }
    return 0;
#endif
    int y = min(4, 6);
    printf("Min Value is : %d\n", y);
    printf("Hello");
    return 0;
}