#include<stdio.h>
int inv=0;
int com=0;
void merge(int arr[],int lb,int mid,int ub)
{
    int i=lb,j=mid+1,k=lb;
    int temp[ub+1];
    while (i<=mid && j<=ub)
    {
        com++;
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ub)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=lb;i<=ub;i++)
        arr[i]=temp[i];
    inv++;
}
void mergesort(int arr[],int lb,int ub)
{
    int mid = 0;
    if(lb<ub)
    {
        mid =(lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main()
{
    int t,i,j,n,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int arr[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        a=0;
        mergesort(arr,a,n-1);
        for(j=0;j<n;j++)
             printf("%d ",arr[j]);
       printf("comperisions = %d\n",com);
       printf("inversions = %d\n",inv);
    }
return 0;    
}
