#include <stdio.h>

int main(){
    double PI=4.0;
    long calcpi=1;
    int i;
    float s=1.0;
    for (i=1; i<=1000000 && (calcpi>3141594 || calcpi<3141590) ; i++){
        PI = PI-s*4.0/(2*i+1);
        s = -s;
        calcpi = (long)(PI*1000000);
    }
    
    printf("times=%d \tvalue=%7.5f \n",i,PI);
    
    return 0;
}
