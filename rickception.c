#include <stdio.h>

int main ()
{
    int n, t;
    scanf("%d%d", &n, &t);
    int serie();
    printf ("%d\n", serie (n, t, 0));
    return 0;
}

int serie(int n, int t, int aux)
{
    if (aux == t)
    {
        return n;
    }
    else
    {
        if (aux % 2 != 0)
        {
            return serie (n + n % 5, t, aux + 1);
        }
        else
        {
            return serie (n + 3, t, aux + 1);
        }
    }
}