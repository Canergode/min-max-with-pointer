#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int i,min,max;
    int *ptr;
    int arr[N];

    // Get N values from user
    printf("Enter %d values:\n",N);
    for(ptr=arr;ptr<arr+N;ptr++)
    {
        scanf("%d",ptr);
    }
    // Initialize min and max with first element
    max=min=arr[0];

    // Find max and min using pointer
    for(ptr=arr+1;ptr<arr+N;ptr++)
    {
        if(*ptr>max)
        {
            max=*ptr;
        }
        if(*ptr<min)
        {
            min=*ptr;
        }
    }

    printf("Maximum value:%d\n",max);
    printf("Minimum value:%d\n",min);

    return 0;
}
