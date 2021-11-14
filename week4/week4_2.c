#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int s=0;
int c=0;
int ranpivot(int arr[],int l,int r)
{
    srand(time(NULL));
    int random = l + rand() % (r - l);
    return arr[random];
}

int partition(int arr[],int l,int r)
{
    int pivot=ranpivot(arr,l,r);
    int start=l+1;
    int end=r;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {    start++;c++;   }
        while(arr[end]>pivot){
            end--;c++;
        }
        if(start<end)
        {
            s++;
            int temp= arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp= arr[l];
    arr[l] = arr[end];
    arr[end] = temp;
    s++;
    return end;
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}

int main()
{
    int t,i,j,n,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0;
        s=0;
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        
        quicksort(arr,0,n-1);
        for(j=0;j<n;j++)
             printf("%d ",arr[j]);
       printf("\n comperisions = %d\n",c);
       printf("swaps = %d\n",s);
    }
return 0;    
}
