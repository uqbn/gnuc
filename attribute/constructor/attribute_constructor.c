
#include <stdio.h>


void test_constructor2(void) __attribute__((__constructor__(102)));

void test_constructor1(void) __attribute__((__constructor__(101)));

int main(void)
{
    printf("%s\n", __FUNCTION__);

    return 0;
}

void test_constructor1(void)
{
    printf("%s\n", __FUNCTION__);
}

void test_constructor2(void)
{
    printf("%s\n", __FUNCTION__);
}