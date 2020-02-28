#include <stdio.h>

int main()
{
    int i=1;
    void produtividade();
    int metaProg=5;
    int metaLinhas=100;
    produtividade(metaProg, metaLinhas, i, 0, 0, 0, 0);
    return 0;
}

void produtividade(int metaProg, int metaLinhas, int i, int contadorMetaProg, int contadorMetaLinhas, int produtivo, int diap)
{
    if (i>7)
    {   
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n",contadorMetaProg);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n",contadorMetaLinhas);
        if (diap == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if (diap == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if (diap == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: TER?A\n");
        }
        else if (diap == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if (diap == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if (diap == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if (diap == 7)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
        else
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
        return;
    }
    else
    {
        int qtdProg, qtdLinhas;
        scanf ("%d%d",&qtdProg, &qtdLinhas);
        if (qtdProg>=metaProg)
        {
            contadorMetaProg = contadorMetaProg + 1;
        }
        if (qtdLinhas>=metaLinhas)
        {
            contadorMetaLinhas = contadorMetaLinhas + 1;
        }
        int comparador = qtdLinhas +qtdProg;
        if (produtivo < comparador)
        {
            return produtividade(metaProg, metaLinhas, i+1, contadorMetaProg, contadorMetaLinhas, comparador, i);
        }
        else
        {
            return produtividade(metaProg, metaLinhas, i+1, contadorMetaProg, contadorMetaLinhas, produtivo, diap);
        }
    }
}