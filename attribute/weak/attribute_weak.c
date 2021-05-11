
#include <stdio.h>

__attribute__((__weak__)) void test_weak(void)
{
    printf("%s\n", "weak");
}

int main(void)
{
    test_weak();
    return 0;
}