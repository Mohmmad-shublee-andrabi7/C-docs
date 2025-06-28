#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
      
        for (j = 1; j <= i; j++) {
            printf("1 ");
        }
       
        for (j = i - 1; j >= 1; j--) {
            printf("1 ");
        }
        printf("\n");
    }

    return 0;
}