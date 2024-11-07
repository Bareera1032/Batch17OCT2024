/*
program to print alphabet triangle.
*/
#include <stdio.h>

void printAlphabetTriangle(int);
void printNumberTriangle(int); 



int main() 
{
    int size;
    
    printf("Enter the size of the triangle: ");
    scanf("%d", &size);
    
    // Alphabet triangle
    printf("\nAlphabet Triangle:\n");
    printAlphabetTriangle(size);
    
    // Number triangle
    printf("\nNumber Triangle:\n");
    printNumberTriangle(size);
    
    return 0;
}


void printAlphabetTriangle(int n) 
{
    int itr1,itr2;
    for (itr1=1;itr1<=n;itr1++)
    {
        for(itr2=1;itr2<=n-itr1;itr2++) 
        {
            printf(" ");
        }
        
        for (itr2=1;itr2<=itr1;itr2++) 
        {
            printf("%c", 'A' + itr2 - 1);
        }
        
        for (itr2=itr1-1;itr2>=1;itr2--) 
        {
            printf("%c", 'A' + itr2 - 1);
        }
        
    
        printf("\n");
    }
}

void printNumberTriangle(int size) 
{
    int itr1,itr2;
    for(itr1=1;itr1<=size;itr1++) 
    {
        for(itr2=1;itr2<=size-itr1;itr2++) 
        {
            printf(" ");
        }
        
        for (itr2=1;itr2<=itr1;itr2++) 
        {
            printf("%d", itr2);
        }
        
        for (itr2 =itr1-1;itr2>=1;itr2--) 
        {
            printf("%d", itr2);
        }
        
        printf("\n");
    }
}
