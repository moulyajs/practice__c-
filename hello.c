#include <stdio.h>
int main()
{
    int a = 3, b = 5;
    printf("%d\n", a > b);

    printf("%d\n", ~b);
    int c = b | 1 << 2;
    printf("%d\n", c);
    int d = a & ~(1 << 2);
    printf("%d\n", d);
    printf("%d\n", a > b ? 3 : 4);
    switch (a)
    {
    case 0:
        printf("hello");
        break;
    case 1:
        printf("hi");
        break;
    default:
        printf("how r u\n");
        break;
    }
    int i = 5;
    while (i-- > 0)
    {
        printf("%d\n", i);
    }
}
