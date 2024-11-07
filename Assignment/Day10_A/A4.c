/*
 rotate array every kth element

*/
#include <stdio.h>

void reverseArray(int [], int, int);
void rotateEveryKthEle(int [], int,int);
void printArray(int [], int); 

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int key = 3;
    int size = sizeof(arr)/sizeof(arr[0]);  
    printf("\nOriginal Array: ");
    printArray(arr, size);
    
    rotateEveryKthEle(arr, size, key);

    printf("\nArray after rotation: ");
    printArray(arr, size);

    return 0;
}

void reverseArray(int arr[], int start, int end)
{
    while(start<end) 
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateEveryKthEle(int arr[], int n, int k)
{
    int i;
  
    for(i=0;i<n;i=i+k)
    {
        
        int start = i;
        int end = i + k - 1;

        while(start < end) 
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}


void printArray(int arr[], int n) 
{
    int i;
    for(i=0;i<n;i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}