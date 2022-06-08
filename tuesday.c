#include<stdio.h>
void show_Result(int*,int*,int );
void nhapmang(int a[], int *n)
{
    *n=-1;
    while (*n<=0)
    {
        printf("Enter the number of elements in the array :");
        scanf("%d",n);    
    }
    
    int i;
    for(i=0;i<*n;i++)
    {
        printf("   A[%d]=",i);
        scanf("%d",&a[i]);
        
    }
}
void minAndMaxOFelememts(int amount[],int size,int *x,int *y)
{
    int min=amount[0];
    int max=amount[0];
    int i;

    for ( i = 1; i < size; i++)
    {
       if(max<=amount[i])
       {
           max=amount[i];
           *x=i;
       }
       else if  (min>=amount[i])
       {
           min=amount[i];
           *y=i;       
       }
       
    }   
}
void xuatmang(int a[],int n)

{
    int i;
    for(i=0;i<n;i++)
    {
        printf("     %d",a[i]);        
    }
    printf("\n\n");
}
int soChi(int b[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(b[i]==x)
        {
            return i;
        }
    }
    return -1;
}
void dem(int a[],int n)
{
    int b[100];
    int amount[100];
    int size=0;
    int i;
    int index,x,y;
    for(i=0;i<n;i++)
    {
        amount[i]=0;
    }
    for(i=0;i<n;i++)
    {
        index=soChi(b,size,a[i]);
        if(index==-1)
        {
            b[size]=a[i];
            amount[size]=1;
            size++;

        }
        else
        {
            amount[index]++;
        }
    }
    show_Result(b,amount,size);
    printf("\n\n---------------------------------Min And Max ------------------------------------\n");
    minAndMaxOFelememts(amount,size,&x,&y);
    for(i=0;i<size;i++)
    {
        if(amount[x]==amount[i])
        {
            printf("Max: %d-%d\n",b[i],amount[i]);
        }
        if(amount[y]==amount[i])
        {
            printf("Min: %d-%d\n",b[i],amount[i]);
        }
    }

}
void show_Result(int b[],int amount[],int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("%d->%d\n",b[i],amount[i]);
    }
}
int main()
{
    int arr[100];
    int n;
    
    nhapmang(arr,&n);
    xuatmang(arr,n);
    dem(arr,n);
    return 0;

}