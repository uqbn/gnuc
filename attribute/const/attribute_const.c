
#include <stdio.h>

static int i = 0;

int test_const(void) __attribute__((__const__));

int test_const(void)
{
    return printf("%i\n", i);
}

int main(void)
{
    printf("%i\n", test_const());

    return 0;
}