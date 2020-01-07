#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <assert.h>
#include <windows.h>
#include <colordlg.h>

#include "string_lib.h"

struct string
{
    char *text;
    int length;
};

struct LayoutInMemory
{
    int i;
    char c;
    double d;
    float f;
    char *s;
};

struct StructureWithUnion
{
    int label;
    union {
        int ivalue;
        float fvalue;
        double dvalue;
        char *cvalueArray;
        struct unionString
        {
            struct StructureWithUnion *s1;
            struct StructureWithUnion *s2;
        };
    } un1;
    char *description;
};

enum COLOR
{
    RED = 4,
    GREEN = 2,
    LIGHT_GREEN = 10,
    BLUE = 1,
    PINK = 11,
    YELLOW = 14,
    ORANGE = 6,
    MAGNETA = 5
};

// Using typedef
typedef struct string *String;

// struct string *
// newString(const char *data)
String
newString(const char *data)
{
    // struct string *s2;
    String s2;
    s2 = malloc(sizeof(struct string));
    if (s2 == 0)
    { // Malloc Failure
        return 0;
    }
    s2->length = strlen(data);
    s2->text = malloc(s2->length);
    if (s2->text == 0)
    {
        free(s2);
        return 0;
    }
    strncpy(s2->text, data, s2->length);
    return s2;
}

// int stringLength(struct string *ss)
int stringLength(String ss)
{
    return ss->length;
}

// void destroyString(struct string *s)
void destroyString(String s)
{
    free(s->text);
    free(s);
}

// int charAt(struct string *s, int index)
int charAt(String s, int index)
{
    if (index <= 0 || index >= s->length)
    {
        printf("Index Out Of Bound\n");
        return -1;
    }
    return s->text[index];
}

int main(int argc, char *argv)
{
    // HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    // SetConsoleTitle("Hello");
    // SetConsoleTextAttribute(color, YELLOW);
    struct StructureWithUnion *StructureWithUnion;
    char a[5] = {'a', 'g', 'c', 'd', 'e'};
    // struct string *s = newString(a);
    String s = newString(a);
    printf("Length of String  : %d\n", stringLength(s));
    printf("Char at no:%d is :%c\n", 2, charAt(s, 2));
    destroyString(s);
    printf("Offset of Int i in Memory: %lu\n", offsetof(struct LayoutInMemory, i));
    printf("Offset of Char c in Memory: %lu\n", offsetof(struct LayoutInMemory, c));
    printf("Offset of Float f in Memory: %lu\n", offsetof(struct LayoutInMemory, f));
    printf("Offset of Double d in Memory: %lu\n", offsetof(struct LayoutInMemory, d));
    printf("Offset of char * s in Memory: %lu\n", offsetof(struct LayoutInMemory, s));
    printf("Sizeof Union : %d", sizeof(StructureWithUnion->un1));
    return 0;
}