
#include <stdio.h>

void test_nunnull(char *s1_s, char *s2_s) __attribute__((__nonnull__(1, 2)));

void test_nunnull(char *s1_s, char *s2_s)
{
    printf("%s %s %s\n", __FUNCTION__, s1_s, s2_s);

    return;
}

int main(void)
{
    test_nunnull("s", NULL);

    return 0;
}