#include<stdio.h>
int sequencefound(int arr[],int n)
{
    int l,k,j;
     for(l=2;l<n;l++)
        {
            for(k=0;k<l-1;k++)
            {
                for(j=k+1;j<l;j++)
                {
                    if(arr[k]+arr[j]==arr[l])
                    {
                        k+=1;
                        j+=1;
                        l+=1;
                        printf("%d, %d, %d\n",k,j,l);
                        return 1;
                    }
                }
            }
               
        }
    return 0;
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

        a=sequencefound(arr,n);
        if(a!=1)
            printf("no sequence found \n");
    }
return 0;    
}