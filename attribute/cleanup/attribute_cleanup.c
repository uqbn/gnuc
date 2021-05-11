
#include <stdio.h>

void test_cleanup(int *n);
void test(void);

void test_cleanup(int *n)
{
    *n = 0;
    printf("%s %i\n", __FUNCTION__, *n);

    return;
}

void test(void)
{
    int a __attribute__((__cleanup__(test_cleanup))) = 1;

    (void)printf("%i\n", a);

    return;
}

int main(void)
{
    test();

    printf("%s\n", __FUNCTION__);

    return 0;
}