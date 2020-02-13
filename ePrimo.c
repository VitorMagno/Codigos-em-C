#include <stdio.h>

int main()
{
    void primo();
    void loop();
    loop (0);
    return 0;

}

void primo (int a, int aux, int term)
{
    if(aux > a)
    {
        if (term == 2)
        {
            printf ("1\n");
        }
        else 
        {
            printf ("0\n");
        }
    }
    else
    {
        if (a % aux == 0)
        {
            return primo (a, aux + 1, term  + 1);
        }
        else
        {
            return primo(a, aux + 1, term);
        }
    }
}


void loop(int a)
{
    scanf ("%d", &a);
    if (a == -1)
    {
        return;
    }
    else
    {
        primo (a, 1, 0);
        loop (a);
    }
    
}
