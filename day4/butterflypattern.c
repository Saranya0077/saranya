#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);  

    n = (n * 2) + 1;

    for (int i = 0; i <= n; i++) {
       
        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        
        for (int s = 0; s < (n - (i * 2 + 2)); s++) {
            printf(" ");
        }

      
        for (int k = 0; k <= i; k++) {
            printf("*");
        }

        printf("\n");  
    }

    return 0;
}
