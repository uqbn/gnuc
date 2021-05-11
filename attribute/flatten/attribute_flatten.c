
#include <stdio.h>

void test_flatten(void) __attribute__((__flatten__));

void test_flatten(void)
{
    printf("%s\n",__FUNCTION__);

    return;
}

int main(void)
{
    test_flatten();

    return 0;
}
