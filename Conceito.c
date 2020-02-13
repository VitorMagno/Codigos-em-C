#include <stdio.h>

int main()
{
    //1 livro para at� 8 alunos --> Conceito A
    //1 livro para entre 9 e 12 alunos --> Conceito B
    //1 livro para entre 13 e 18 alunos --> Conceito C
    //1 livro para mais de 18 alunos --> Conceito D
   int l,a,c,d;
   scanf("%d%d",&l,&a);
   c=a/l;
   

   if(c<=8)
   {
       printf("A");
   }
    else if(c>8 && c<13)
    {
        printf("B");
    }
   else if(c>12 && c<19)
   {
       printf("C");
   }
   else if(c>18)
   {
       printf("D\n");
   }
return 0;
}
