#include <stdio.h>

int main()
{
    double PI=4.0;
    long fixpi=314159;
    long calcpi=1;
    int i;
    float s=1.0;
    
    for (i=1; i<=300000 && fixpi!=calcpi ; i++)
    {
        PI = PI-s*4.0/(2*i+1);
        s = -s;
        calcpi = (long)(PI*100000);
    }
    
    printf("times=%d\t value=%.5f\n",i,PI);
    
    return 0;
}
