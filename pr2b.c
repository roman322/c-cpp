#include <stdio.h>
#include <math.h>

int main (void)
{   
    
    double x,h=0.1,a=1,b=2,y=1.0,sum,d=1.0;
        int k;
        printf("a:");
        scanf("%le", &a );
        printf("b:");
        scanf("%le", &b );
        printf("d:");
        scanf("%le",&d);
        printf("h:");
        scanf("%le", &h );
    for(x=a;x<=b;x+=h)
         
        {     
               k=1;
               y=1.0;
               sum=0;
               while(fabs(y)>d)
               {
                     y=(pow(-1,k)*(cos(pow(2,k))*x))/powf(2,(2));
                     sum+=y;
                     k++;
            
               }
            printf("%.2f -> %.5f %f\n",x,sum,y);
        }
 
}

