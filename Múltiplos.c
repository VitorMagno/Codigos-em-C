#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d", &n);
    scanf ("%d%d", &a, &b);
    int p;
    if (b<a)
    {
        p=b;
        b=a;
        a=p;
    }
    void calcmultiplos();
    calcmultiplos(n, a, b, 0);


    return 0;
}

void calcmultiplos(int n, int a, int b, int mult)
{
    if (a > b)
    {
        if(mult!=0)
        {
            return;
        }
        else
        {
            printf("INEXISTENTE\n");
            return;
        }
    }
    else
    {
        if (a%n==0)
        {
            printf("%d\n", a);
            return calcmultiplos(n, a+1, b, 1);
        }
        else
        {
            return calcmultiplos(n, a+1, b, mult);
        }
    }
}