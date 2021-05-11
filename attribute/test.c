#include <stdio.h>
#include <stdlib.h>
#include "attribute.h"

#define cleanup_cp __cleanup(cleanup_s) char *

void cleanup_s(char **s)
{
    free(*s);
    *s = NULL;
}

void test(char *s)
{
    cleanup_cp p = s;
    printf("%s\n", p);
}

int main(void)
{
    char *s = malloc(100);
    sprintf(s, "1234");
    test(s);
    printf("%s\n", s);
    return 0;
}