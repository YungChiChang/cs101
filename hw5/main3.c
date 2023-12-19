#include <stdio.h>

int main() {
    for (int y = 1,x=1; y<=9,x <= 9; ++y,++x)  {
        {
            printf("%d*%d = %d\t", y, x, y * x);
        }
        printf("\n");
    }

    return 0;
}
