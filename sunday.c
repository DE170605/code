#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ranDom()
{
    srand(time(NULL));
    return 10 - rand() % 10;
}

void putInArray(int arr[], int *n)
{
    int i;

    *n = 0;
    while (*n <= 0)
    {
        printf("Enter number of element in array :");
        scanf("%d", n);
    }

    for (i = 0; i < *n; i++)
    {
        arr[i] = ranDom();
    }
}

void showArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void deleteElementAtAnyPosition(int arr[], int *n, int k)
{
    int i;
    for (i = k; i < *n; i++)
    {
        arr[i] = arr[i + 1];
    }
    *n = *n - 1;
}

void Result(int arr[], int n, int k)
{
    k = -1;
    while (k < 0 || k >= n)
    {
        printf("Enter the position you want to insert :");
        scanf("%d", &k);
    }

    deleteElementAtAnyPosition(arr, &n, k);
    showArray(arr, n);
}

int main()
{
    int arr[100];
    int n;
    int k;
    putInArray(arr, &n);
    showArray(arr, n);
    Result(arr, n, k);

    return 0;
}