
#include <stdio.h>

static int i = 1;

int test_pure(int x, int y) __attribute__((__pure__));
void test_pure2(void) __attribute__((__pure__));

void test_pure2(void)
{
    printf("%s\n", __FUNCTION__);
}

int test_pure(int x, int y)
{
    printf("%s\n", __FUNCTION__);
    i++;
    return x + y + i;
}

int main(void)
{
    test_pure2();

    printf("%i\n", test_pure(1, 2));
    printf("%i\n", test_pure(1, 2));

    return 0;
}
