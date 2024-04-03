/*
#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    int factorial;
    scanf("%d", &n);
    factorial = fact(n);
    printf("the factorial of %d is %d", n, factorial);
    return 0;
}
int fact(int n)
{
    int result;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
*/
/*
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("%d", result);
    return 0;
}
int fibonacci(int n)
{
    if (n <= 0)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
*/
#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = gcd(a, b);
    printf("%d", result);
    return 0;
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}