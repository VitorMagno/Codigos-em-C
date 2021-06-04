#include <stdio.h>

int main()
{
    int v1, d1, v2, d2;
    int n=0;
    int batalha();
    scanf("%d", &n);
    for(int i=0; i<n; i++)//o usuario digita a quantidade de batalhas que vao acontecer
    {
        
        int resultado; 
        scanf("%d %d %d %d", &v1,&v2,&d1,&d2);//solicitado a vida e dano dos oponentes
        resultado = batalha(v1,v2,d1,d2);
        
        if (resultado!=0)
        {
            if(resultado==1)
            {
                printf("Bezaliel\n");
            }
            else
            {
                printf("Clodes\n");
            }
        }

    }
    
    return 0;
}

int batalha (int v1, int v2, int d1, int d2) 
{
    while(v1>=0 && v2>=0)//looping da batalha que se repete ate alguem zerar a vida.
    {   
        int qtdAtaquesPMatarBezaliel = v2/d1;
        int qtdAtaquesPMatarClodes = v1/d2;
        if (v2%d1 > 0)//garante que clodes saiba exatamente quantos ataques ele vai precisar
        {
            qtdAtaquesPMatarBezaliel+=1;
        }
        if(v1%d2 > 0)
        {
            qtdAtaquesPMatarClodes+=1;
        }
        if (qtdAtaquesPMatarBezaliel > qtdAtaquesPMatarClodes)//clodes vai incrementar seu ataque ate que seja possivel ganhar de bezaliel.
        {   
            d1+=50;
        }
        else
        {
            v2-= d1;
        }

        if (v2>0)
        {
            v1-=d2; 
        }
        else
        {
            return 2;
        }
        if(v1<=0)
        {
            return 1;
        }
    }
    return 0;
}