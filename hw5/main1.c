#include <stdio.h>

int main(){
    int n=7;
    int rows;
    int i;
    int j;
    int x;
    
    for(rows=1;rows<=n;rows++){
        x=n+1-rows;
        j=rows;
        
        for(i=1;i<=n*2;i++){
            if(i==x&&j>0){
                printf("%d",rows);
                x=x+2;
                j=j-1;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
