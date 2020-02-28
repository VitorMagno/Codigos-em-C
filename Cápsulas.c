#include <stdio.h>
#include <string.h>

int main ()
{
    int totalDeCafe ();
    int quantidade = totalDeCafe (0,6);
    int cafePorProfessor = (quantidade / 7) * 2;
    printf ("%d\n%d\n", quantidade, cafePorProfessor);
    // a funcao main utiliza os dados da funcao totalDeCafe para dividir capsulas de cafe igualmente para os professores
    return 0;
}
// essa funcao utiliza a quantidade de caixas deixadas pelos professores e o tipo de caixa que foi deixado para contar a quantidade de cafe disponivel
int totalDeCafe (int quantidade, int professores)
{   
    
    int qtd;
    char tipo[1];
    
    scanf("%d", &qtd);
   
    scanf (" %c", &tipo[0]);
    int caixaG, caixaP;
    caixaG = 16;
    caixaP = 10;
    
    if (professores<0)
    {
        return quantidade;
    }
    else
    {
        if (tipo[0] == 'g' || tipo[0] == 'G')
        {   
            int unidades = caixaG * qtd;
            
            return totalDeCafe (quantidade + unidades, professores - 1);
        }
        else if (tipo[0] == 'p' || tipo[0] == 'P')
        {   
            int unidades = caixaP * qtd;
            
            return totalDeCafe (quantidade + unidades, professores - 1);
        }
        else 
        {
            printf("digite uma quantidade valida de caixas e um caracter identifique a caixa\n");
            return totalDeCafe (quantidade, professores);
        }
    }
    
}