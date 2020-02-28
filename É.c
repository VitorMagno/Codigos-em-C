#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int triangular(int i, int n)
{
    int m = n * (n + 1) * (n + 2);
    if(m == i)
    {
        printf("%d * %d * %d = %d\n", n, n + 1, n + 2, i);
        printf("Verdadeiro");
    }
    else if(m < i)
    {
        triangular(i, n + 1);
    }
    else
    {
        printf("Falso");
    }
}

int main() 
{
    int i;
    scanf("%d", &i);
    if(i == 0)
    {
        printf("Falso");
    }
    else
    {
        triangular(i, 1);
    }
	return 0;
}