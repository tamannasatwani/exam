#include <stdio.h>

int main() {
    int n = 5;  
    int i, j;  

    for (i = 0; i < n; i++) {  
       
        for (j = 0; j < i; j++) {
            printf("  ");  
        }

        for (j = 10 - i; j >= 6; j--) {
            printf("%d ", j);
        }

        printf("\n");  
    }

    return 0;
}


