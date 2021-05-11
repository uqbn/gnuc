
#include <stdio.h>

void test_unavailable(void) __attribute__((__unavailable__));

//void test_unavailable(void) __attribute__((__deprecated__));

void test_unavailable(void)
{
    printf("%s\n", __FUNCTION__);

    return;
}

int main(void)
{
    test_unavailable();

    return 0;
}