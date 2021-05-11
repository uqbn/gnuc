
#include <stdio.h>

unsigned int test_warn_unused_result(void) __attribute__((__warn_unused_result__));

unsigned int test_warn_unused_result(void)
{
    printf("%s\n", __FUNCTION__);

    return -1;
}

int main(void)
{
    (void)test_warn_unused_result();

    printf("%u\n", test_warn_unused_result());

    return 0;
}
