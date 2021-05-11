
#include <stdio.h>

void func(void);
void test_attribute_alias(void) __attribute__((__alias__("func")));

void func(void)
{
    printf("%s\n", __FUNCTION__);

    return;
}

int main(void)
{
    printf("%s\n", __FUNCTION__);

    test_attribute_alias();

    printf("%s\n", __FUNCTION__);

    return 0;
}