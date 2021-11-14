#include<stdio.h>
void insertion(int arr[],int n)
{
    int s=0,c=0;
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            s++;
            c++;
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;
        s++;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\ncomparition = %d\n",c);
    printf("shifts = %d\n",s);
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

        insertion(arr,n);
    }
return 0;    
}
