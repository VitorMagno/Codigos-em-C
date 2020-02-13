#include <stdio.h>

int main()
{
    //x � maior que y

    //x � igual a y

    //x � menor que y

    //x � diferente de y

    //x � maior ou igual a y

    //x � menor ou igual a y
   int x,y,c;
   scanf("%d%d",&x,&y);

   if(x>y)
   {
       c=1;
       printf("%d\n",c);
   }
   else
   {
       printf("0\n");
   }
   if(x==y)
   {
       c=1;
       printf("%d\n",c);
   }
   else
   {
       printf("0\n");
   }
    if(x<y)
   {
       c=1;
       printf("%d\n",c);
   }
   else
   {
       printf("0\n");
   }
    if(x!=y)
   {
       c=1;
       printf("%d\n",c);
   }
   else
   {
       printf("0\n");
   }
     if(x>=y)
   {
       c=1;
       printf("%d\n",c);
   }
   else
   {
       printf("0\n");
   }
    if(x<=y)
   {
       c=1;
       printf("%d\n",c);
   }
   else
   {
       printf("0\n");
   }
return 0;
}
