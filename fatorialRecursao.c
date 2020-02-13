#include <stdio.h>

int main()
{
    int n;
    int fatorial ();
    void repeticoes ();
    repeticoes(0);


    return 0;
}

int fatorial (int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else 
    {
        return n * fatorial (n-1);
    }

}
void repeticoes (int n)
{
    if (n == 999)
    {
        return;
    }
    else 
    {
        int a;
        scanf("%d", &a);
        if (a < 0)
        {
            return;
        }
        printf ("%d\n", fatorial (a));
        repeticoes (n + 1);
    }
}

