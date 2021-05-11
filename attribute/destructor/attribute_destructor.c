
#include <stdio.h>

void test_destructor2(void) __attribute__((__destructor__(202)));

void test_destructor1(void) __attribute__((__destructor__(201)));

int main(void)
{
    printf("%s\n", __FUNCTION__);

    return 0;
}

void test_destructor1(void)
{
    printf("%s\n", __FUNCTION__);
}

void test_destructor2(void)
{
    printf("%s\n", __FUNCTION__);
}