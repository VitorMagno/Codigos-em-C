#include <stdio.h>

int main()
{
    int number, h;
    double vh, salary;
    scanf("%d%d%lf",&number,&h,&vh);
    salary=vh*h;

    printf("NUMBER = %d\nSALARY = R$ %.2lf\n",number, salary);
    return 0;
}