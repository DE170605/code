#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// int ranDom()
// {
//     srand(time(NULL));
//     return rand()%10;
// }
void PutInArray(int arr[], int *n)
{
    srand(time(NULL));

    *n = -1;
    while (*n <= 0)
    {
        printf("Enter the number of elements in array :");
        scanf("%d", n);
    }
    int i;
    for (i = 0; i < *n - 1; i++)
    {
        arr[i] = 10 - rand() % 10;
    }
}
void showArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        printf("%d", arr[i]);
    }
}
void permutation(int *x, int *y)
{
    int m = 0;
    m = *x;
    *x = *y;
    *y = m;
}
void sortArray(int arr[], int n)
{
    int i;
    int j;
    for (i = 0; i < n - 2; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                permutation(&arr[i], &arr[j]);
            }
        }
    }
}
int insertElementIntoArray(int arr[], int n, int k, int x)
{
    int i;
    for (i = (n - 1); i > x; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[x] = k;
    n = n + 1;
    return n;
}
void insertElementIntoArrayAndSort(int arr[], int *n)
{
    int k;
    int x = 0;
    printf("Enter the value of element K=");
    scanf("%d", &k);
    int i;
    if (k <= arr[0] || k >= arr[*n - 2])
    {
        if (k <= arr[0])
        {
            x = 0;
        }
        else
        {
            x = *n - 1;
        }
    }
    else
    {

        for (i = 0; i < *n - 1; i++)
        {
            if (arr[i] < k && k < arr[i + 1])
            {
                x = i + 1;
            }
        }
    }
    *n = insertElementIntoArray(arr, *n, k, x);
}
int main()
{
    int arr[100];
    int n;

    PutInArray(arr, &n);
    printf("show array : \n");
    showArray(arr, n);

    printf("\nsort array : \n");
    sortArray(arr, n);
    showArray(arr, n);

    printf("-------------------------Result of program------------------------------\n");
    insertElementIntoArrayAndSort(arr, &n);
    showArray(arr, n);

    return 0;
}