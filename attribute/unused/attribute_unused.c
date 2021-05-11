
#include <stdio.h>

void test_unused(void) __attribute__((__unused__));
void test_used(void) __attribute__((__used__));

void test_unused(void)
{
    printf("%s\n",__FUNCTION__);

    return;
}

void test_used(void)
{
    printf("%s\n",__FUNCTION__);

    return;
}

int main(void)
{
    return 0;
}