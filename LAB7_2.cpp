#include<stdio.h>
int main()
{
//fill the code;
int n;
printf("Enter array size \n");
scanf("%d",&n);
int arr[n];
int i;
printf("Enter array values \n");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("Reversed array is:\n");
for(i = n-1; i >= 0; i--)
{
printf("%d \n",arr[i]);
}
return 0;
}
