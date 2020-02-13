#include <stdio.h>

int main()
{
//?lcool
//at? 20 litros, desconto de 3% por litro || la<=20 pl*=.97
//acima de 20 litros, desconto de 5% por litro || la>20 pl*=.95

//[Gasolina:
//at? 20 litros, desconto de 4% por litro || lg<=20 pg*=.96
//acima de 20 litros, desconto de 6% por litro || lg>20 pg*=.94

//Diesel
//at? 25 litros, n?o existe desconto
//acima de 25 litros, desconto de 4% por litro || ld>25 pd*=.96

   
   
    double l, a,g ,d, p;
    g=2.50;
    a=1.90;
    d=1.66;
    char tipo;

  	/* Exemplo 01
  	
  	 char Alc = 'A';
     char Dis = 'D';
     char Gas = 'G';
     char tipo;
     
     ...
     
     scanf("%c", &tipo);
     
     ...
     
     if (tipo == Alc) { fa�a as paradas do alcool }
     
     if (tipo == Dis) { fa�a as paradas do diesel }
     
     if (tipo == Gas) { fa�a as paradas da gasolina }
     
  	*/
  
  
  	/* Exemplo mplo 02
  	 
     char A = 'A';
     char D = 'D';
     char G = 'G';
     char tipo;
     
     ...
     
     scanf("%c", &tipo);
     
     ...
     
     if (tipo == A) {}
     if (tipo == D) {}
     if (tipo == G) {}
  	 
  	*/
  
  
  	/* Exemplo 03
  	 
     char tipo;
     
     ...
     
     scanf("%c", &tipo);
     
     ...
     
     if (tipo == 'A') {}
     if (tipo == 'D') {}
     if (tipo == 'G') {}
     
  	*/
  
  
    // scanf("%lf\n%c\n", &l, &tipo);
    scanf("%lf\n %c\n",&l,&tipo);
    
    

    if (tipo=='A' && l<=20) // Isso vai dar erro. Voc� n�o declarou nenhuma vari�vel com o nome A.
    {
        p=(a*.97)*l;
        printf("R$ %.2lf\n",p);
    }
    else if (tipo=='A' && l>20) // Isso vai dar erro. Voc� n�o declarou nenhuma vari�vel com o nome A.
    {
        p=(a*.95)*l;
        printf("R$ %.2lf\n",p);
    }
     if (tipo=='G' && l<=20) // Isso vai dar erro. Voc� n�o declarou nenhuma vari�vel com o nome G.
    {
        p=(g*.96)*l;
       printf("R$ %.2lf\n",p );
    }
    else if (tipo=='G' && l>20) // Isso vai dar erro. Voc� n�o declarou nenhuma vari�vel com o nome G.
    {
        p=(g*.94)*l;
        printf("R$ %.2lf\n",p);
    }
     if (tipo=='D' && l<=25) // Isso vai dar erro. Voc� n�o declarou nenhuma vari�vel com o nome D.
    {
        p=d*l;
        printf("R$ %.2lf\n",p);
    }
    else if (tipo=='D' && l>20)  // Isso vai dar erro. Voc� n�o declarou nenhuma vari�vel com o nome D.
    {
        p=(d*.96)*l;
        printf("R$ %.2lf\n",p);
    }
   


 







return 0;
}
