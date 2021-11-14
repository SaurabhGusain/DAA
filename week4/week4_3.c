#include<stdio.h>
#include<stdlib.h>

int partition(int arr[],int l,int r)
{
    int pivot=arr[l];
    int start=l+1;
    int end=r;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {    start++;   }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end)
        {
            int temp= arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp= arr[l];
    arr[l] = arr[end];
    arr[end] = temp;
    return end;
}

int quicksort(int arr[],int l,int r,int k)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        if(k<p)
            quicksort(arr,l,p-1,k);
        else
            quicksort(arr,p+1,r,k);
        
        if(k==p)
           { return p;
       }
   }
}

int main()
{
    int t,i,j,n,key,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        scanf("%d",&key);
        a=quicksort(arr,0,n-1,key-1);
       printf("%d\n",arr[a]);
    }
return 0;    
}
