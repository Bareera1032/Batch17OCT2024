/*
   Print the Nth number of sequence and it should be only prime.

*/
#include <stdio.h>
int generatePrime(int);

int main() 
{
    int T, N , it;
    
    printf("\nEnter the number of test cases: ");
    scanf("%d", &T);
    
    
    for (it=0;it<T;it++) 
    {
        printf("\n Enter the value of N: ");
        scanf("%d", &N);
        printf("\n%d\n", generatePrime(N));
    }

    return 0;
}

int generatePrime(int n)
{
    int result = 0;
    int val = 1;
    
    while (n>0) 
    {
        
        int digit = (n - 1) % 4;  
        if(digit == 0) 
        {
            result += 2 * val;
        }
        else if (digit == 1) 
        {
            result += 3 * val; 
        }
        else if (digit == 2)
        {
            result += 5 * val;
        }
        else
        {
            result += 7 * val;
        }
        
        
        val = val*10;
        
        n = (n - 1) / 4;
    }
    
    return result;
}



