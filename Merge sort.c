#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], arr3[100];
    int m, n, i, j, k = 0;

    printf("Enter the size of the 1st array: ");
    scanf("%d", &m);

    printf("Enter the elements of the sorted array:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the size of the 2nd array: ");
    scanf("%d", &n);

    printf("Enter the elements of the 2nd sorted array:\n");
    for(j = 0; j < n; j++)
        scanf("%d", &arr2[j]);

    i = 0;
    j = 0;

    while(i < m && j < n)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    if(i == m)
    {
        while(j < n)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    if(j == n)
    {
        while(i < m)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }

    printf("The merged array is: ");

    for(i = 0; i < k; i++)
        printf("%d ", arr3[i]);

    return 0;
}
