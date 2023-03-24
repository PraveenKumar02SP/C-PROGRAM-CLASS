#include <stdio.h>

int main()
{
    int n1, n2, gcd = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is %d\n", n1, n2, gcd);

    return 0;
}
output:
Enter two positive integers: 12 18
GCD of 12 and 18 is 6