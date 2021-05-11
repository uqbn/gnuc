
#include <stdio.h>

void *test_malloc(int a) __attribute__((__alloc_size__(1)));
void *test_callocd(int a, int b, int m) __attribute__((__alloc_size__(2, 3)));

void *test_malloc(int a)
{
    return NULL;
}

void *test_callocd(int a, int b, int m)
{
    return NULL;
}

int main(void)
{
    void *const p = test_malloc(100);

    printf("%zu\n", __builtin_object_size(p, 0));

    void *const a = test_callocd(20, 3, 5);

    printf("%zu\n", __builtin_object_size(a, 1));

    return 0;
}