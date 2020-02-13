#include <stdio.h>

int tabuada()
{
    int numero,r1,r2,r3,r4,r5,r6,r7,r8,r9;
    scanf("%d", &numero);
    r1=numero*1;
    r2=numero*2;
    r3=numero*3;
    r4=numero*4;
    r5=numero*5;
    r6=numero*6;
    r7=numero*7;
    r8=numero*8;
    r9=numero*9;
    printf("%d X 1 = %d\n%d X 2 = %d\n%d X 3 = %d\n%d X 4 = %d\n%d X 5 = %d\n%d X 6 = %d\n%d X 7 = %d\n%d X 8 = %d\n%d X 9 = %d\n",numero, r1, numero,r2,numero,r3,numero,r4,numero,r5,numero,r6,numero,r7,numero,r8,numero,r9);
    return 0;


}
int main()
{
    tabuada();
    return 0;
}