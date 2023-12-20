#include <stdio.h>

int main() {
    int i = 12345;

    if (i > 0) {
        
        int thousands = (i / 1000) % 10;
        int units = i % 10;
        i = i - thousands * 1000 + units * 1000 + thousands - units;
        printf(" %d\n", i);
    } 
    else {
        printf("\n");
    }

    return 0;
}
