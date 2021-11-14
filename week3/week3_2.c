#include<stdio.h>
void selection(int arr[],int n)
{
    int s=0,c=0,temp;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            c++;
            if(arr[j]<min)
                {
                    min=j;
                }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        s++;

    }
     for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\ncomparition = %d\n",c);
    printf("swaps = %d\n",s);
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

        selection(arr,n);
    }
return 0;    
}