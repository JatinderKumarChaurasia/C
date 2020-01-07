#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NAME_LENGTH (2)
#define INITIAL_LINE_LENGTH (2)

char *getLine(void)
{
    char *line;
    int size;
    int length;
    char c;
    size = INITIAL_LINE_LENGTH;
    line = malloc(size);
    assert(line);
    length = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (length >= size - 1)
        {
            size *= 2;
            line = realloc(line, size);
        }
        line[length++] = c;
    }
    return line;
}
int strlenc(const char *s)
{
    int i;
    for (i = 0; *s; i++, s++)
        ;
    return i;
}

void concat(char *dest, const char *src)
{
    while (*dest)
    {
        dest++;
    }
    while (*dest++ = *src++)
        ;
}

void stringcpy(char *dest, const char *src)
{
    while (*dest++ = *src++)
        ;
}

char *stringcpy1(char *dest, const char *src)
{
    int i = 0;
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}

int strcompare(char *str1, char *str2)
{
    while (*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main(int argc, char **argv)
{
    int x = 12;
    char *line;
    int y = 17;
    puts("What is Your Name");
    line = getLine();
    char *text = "Hi";
    printf("String Length: %d\n", strlenc(line));
    printf("Hi %s!  Did you know that x == %d and y == %d?\n", line, x, y);
    free(line);
    char *ma = "Nue";
    // concat(text, ma);
    printf("%s\n", text);
    if (strcompare("Hi", "Hi") != 0)
    {
        printf("Not EQUAL\n");
    }
    else
    {
        printf("Equal\n");
    }
    char *res = stringcpy1(text, ma);
    // printf("%s\n", res);
    return 0;
}