#include <stdio.h>
long long fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    printf("Enter the position of the term: ");
    scanf("%d", &n);
    if (n < 0 || n > 92)
    {
        printf("Enter a number between 0 and 92.\n");
    }
    else
    {
        printf("Fibonacci term = %lld\n", fibonacci(n));
    }
    return 0;
}
