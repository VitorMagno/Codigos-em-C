#include <stdio.h> 

int main ()
{
    double q,q2;
    double p1,p2,p3,p4,rs;
    p1=5.30;
    p2=6.00;
    p3=3.20;
    p4=2.50;
        
        scanf("%lf%lf",&q,&q2);
            
            if (q==1)
            {
                q = 5.30;
            }
            else if (q==2)
            {
                q = 6.00;
            }
            else if (q==3)
            {
                q = 3.20;
            }
            else 
            {
                q = 2.50;
            }
                rs = (q * q2);

                    if ( rs >= 40.00 || q2 >= 15.00)
                    {
                    rs = rs*.85;
                    }
                        printf("R$ %.2lf\n", rs);
    
    return 0;
}