
#include <stdio.h>
#include <stdlib.h>

void test_attribute_noreturn(void) __attribute__((__noreturn__));

void test_attribute_noreturn(void)
{
    printf("%s\n", __FUNCTION__);

    exit(0);
}

int main(void)
{
    printf("%s\n", __FUNCTION__);

    test_attribute_noreturn();

    printf("%s\n", __FUNCTION__);

    return 0;
}