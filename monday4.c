#include<stdio.h>
void putArray(int arr[],int *n)
{
    *n=-1;
    while (*n<=0)
    {
        printf("Enter the number of elements in the array:");
        scanf("%d",n);
    }
    int i;
    for(i=0;i<*n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void showArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
void findOutLocation(int arr[],int n,int start[],int end[],int *m)
{
    int i,j;
    j=0;
    start[j]=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            end[j++]=i;
            start[j]=i+1;
        }
    }
    end[j++]=n-1;
    *m=j;
    printf("m=%d",*m);
    
//     printf("\n show start ");
//     showArray(start,*m);
//     printf("\n show end ");
//     showArray(end,*m);
 }
int findTheMaximumLength(int start[],int end[],int n)
{
  int max=end[0]-start[0]+1;
  int i;
  int length=0;
  for(i=1;i<n;i++)
  {
      length=end[i]-start[i]+1;
      if(max<length)
      {
          max=length;
      }
  }
   return max;
}
void showResult(int arr[],int a,int b)
{
    int i;
    printf("\n");
    for(i=a;i<=b;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n");
}
void result(int arr[],int n,int start[],int end[],int m)
{
    int max=findTheMaximumLength(start,end,m);
    int length;
    if(n==m)
    {
        printf("\narray tend to decrease ");
    }
    else
    {
        int i;
        for(i=0;i<m;i++)
        {
            length=end[i]-start[i]+1;
            if(length==max)
            {
                showResult(arr,start[i],end[i]);
            }
        }
    }
}


int main()
{
    int arr[100];
    int n,m;
    int start[100];
    int end[100];
    
    putArray(arr,&n);
    showArray(arr,n);
 

    findOutLocation(arr,n,start,end,&m);

    

    result(arr,n,start,end,m);







    return 0;

}