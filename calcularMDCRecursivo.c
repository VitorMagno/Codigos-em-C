#include <stdio.h> 

int main()
{
    int mdc();
    int a,d;
    scanf("%d%d", &a, &d);
    printf ("%d\n", mdc(a,d,0));
    return 0;
}
int mdc (int a, int d, int resto)
{
    if (a % d == 0)
    {
        return d;
    }
    else
    {
        resto = a % d;
        return mdc (d,resto,resto);
    }
}