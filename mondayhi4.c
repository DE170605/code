#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void putInArray(int arr[][100], int *n, int *m)
{
    srand(time(NULL));

    *n = -1;
    *m = -1;
    while (*n <= 0)
    {
        printf("Enter the number of rows in array :");
        scanf("%d", n);
    }
    while (*m <= 0)
    {
        printf("Enter the number of columns in array :");
        scanf("%d", m);
    }

    int i, j;
    for (i = 0; i < *n; i++)
    {
        for (j = 0; j < *m; j++)
        {
            arr[i][j] = rand() % 9;
        }
    }
}
void showArray(int arr[][100], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }
}
void largestNumberOfRowsInArray(int arr[][100], int n, int m)
{
    int max;
    int i, j;
    for (i = 0; i < n; i++)
    {
        max = arr[i][0];
        for (j = 1; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        printf("\nlargest number of rows[%d] :%d", i, max);
    }
}

int main()
{
    int arr[100][100];
    int n, m;
    putInArray(arr, &n, &m);
    showArray(arr, n, m);

    largestNumberOfRowsInArray(arr, n, m);
    return 0;
}