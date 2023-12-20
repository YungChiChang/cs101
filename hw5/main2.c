#include <stdio.h>

int main(){
    double PI=4.0;
    long fixpi=3141592;
    long calcpi=1;
    int i;
    float sign=1.0;
    
    for(i=1;i<=1000000&&fixpi!=calcpi;i++){
        PI=PI-sign*4.0/(2*i+1);
        sign=sign*(-1);
        calcpi=(long)(PI*1000000);
    }
    printf("times=%d\tvalue=%7.5f\n",i,PI);
    
    return 0;
}
