#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for(i=1; i<=rows; i++){
        for(j=i; j<rows; j++){
            printf(" ");//print space for triangle
        }
        for(j=1; j<=i; j++){    
        printf("*");     
        }
        printf("\n");//move to next line for iterate
    }
   return 0;
}
