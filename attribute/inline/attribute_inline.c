
#include <stdio.h>

void test_noinline(void) __attribute__((__noinline__));
void test_always_inline(void) __attribute__((__always_inline__));

inline void test_inline(void)
{
    printf("%s\n", __FUNCTION__);

    return;
}

void test_noinline(void)
{
    printf("%s\n", __FUNCTION__);

    return;
}

void test_always_inline(void)
{
    printf("%s\n", __FUNCTION__);

    return;
}

int main(void)
{
    test_noinline();

    test_always_inline();

    return 0;
}
