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
void generate(int n, int current)
{
    if (current == n)
    {
        return;
    }
    printf("%lld ", fibonacci(current));
    generate(n, current + 1);
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n < 0 || n > 93)
    {
        printf("Enter a number between 0 and 93.\n");
    }
    else
    {
        printf("Fibonacci series:\n");
        generate(n, 0);
    }
    return 0;
}
