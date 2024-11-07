/*
Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits

*/

#include <stdio.h>

void generateNth(int);

int main()
{
    int Number;
    printf("\nEnter the number: ");
    scanf("%d",&Number);
    generateNth(Number);
    
    return 0;
}

void generateNth(int num)
{
    int givenDigits[]={1,4,6,9};
    int num1[10];
    int ele=0;
    int itr;
    while(num>0)
    {
        num1[ele++] = givenDigits[(num-1)%4];
        num=(num-1)/4;
    }
    for(itr=ele-1;itr>=0;itr--)
    {
        printf("%d",num1[itr]);
    }
    
    printf("\n");
    

}