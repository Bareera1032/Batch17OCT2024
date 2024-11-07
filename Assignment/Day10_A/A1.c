/*
 Check whether a given number can be expressed as the sum of two prime number
*/


#include <stdio.h>

#define True 1
#define False 0

int isPrime(int);
void checkSum(int);

int main() 
{
    int num, count = 0,i;
    
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);
    
    checkSum(num);
    
    
    return 0;
}

// Function to check if a number is prime
int isPrime(int val)
{
	int it, flag=0;
	if(val<=1)
		return False;

	for(it=2;it<=val/2;it++)
	{
		if(val%it == 0)
		{
			flag = 1;
			break;
		}
	}
	if(flag ==1)
		return False;
	else
		return True;
}

void checkSum(int num){
    int it,count=0;
    for (it=2;it<=num/2;it++)
    {
        if (isPrime(it) && isPrime(num - it)) 
        {
            printf("\n%d = %d + %d\n", num, it, num - it);
            count++;
        }
    }

    if (count == 0) 
        printf("\nNo of Ways = -1\n");
    else
        printf("\nNo of Ways = %d\n", count);
}

