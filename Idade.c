#include <stdio.h>

int main()
{
    int idade,dias,horas,minutos,segundos;
    scanf("%d",&idade);
    dias= idade*365;
    horas=dias*24;
    minutos=horas*60;
    segundos=minutos*60;

    printf("%d\n", segundos);
    
    return 0;
}