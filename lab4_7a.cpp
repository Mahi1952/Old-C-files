#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rows;//variable declaration
    //Input row value from user
    printf("Enter of rows you want\n");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){//parent for loop, for row of hollow triangle
        for(j=1; j<=i; j++){//print columns
            if(j==1 || j==i || i==rows){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");//move to next line
    }
  
    return 0;
}
