#include <stdio.h>
// Defining macros on the command line
// gcc -g3 -DHI -o macros1 macros1.c
int main(int argc, char **argv)
{
#ifdef HI
    puts("hELLO");
#else
#ifndef SAY_POLITE
    puts("Be Polite");
#else
    puts("Sorry Not You!");
#endif // closing SAY_POLITE
#endif // closing HI

#ifdef MESSAGE
    puts(MESSAGE);
#endif
    return 0;
}