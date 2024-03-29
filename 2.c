#include <stdio.h>

int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;
  
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
  
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
  
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
      
    }
  
    // Read contents from file
    c = fgetc(fptr1);
    int count1=0,count2=0;
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
        if(c='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        ++count1;
        if(c==' ')
        ++count2;
    }
  
    printf("\nContents copied to %s", filename);
    printf("Vowels:: %d",count1);
    printf("Space characters:: %d",count2);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
