//Write a C Program to Return multiple value from function-using pointers
//Return minimum and maximum of the ARRAY

#include <stdio.h>
#define n 100
int main()
{
    int size;
    int arr[n];
    printf("enter numbers of array ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
            printf("enter number %d ",(i+1));
            scanf("%d",&arr[i]);
            }

    findMinimumMaximum(arr, size);
    return 0;}

int findMinimumMaximum(int arr[], int size)
{
    int i;
    int min = arr[0], max = arr[0];
    for (i = 0; i < size; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("minimum element is %d\n", min);

    printf("maximum element is %d", max);
}
