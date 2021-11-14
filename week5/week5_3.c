#include<stdio.h>
int main()
{
     int i,j,m,n;
        scanf("%d",&m);
        int arr1[m];
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[j]);
        }
        scanf("%d",&n);
        int arr2[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[j]);
        }
        i=0;
        j=0;
        while(i<m && j<n)
        {
            if(arr1[i]<arr2[j])
                i++;
            else if(arr1[i]>arr2[j])
                j++;
            else
            {
                printf("%d ",arr2[j]);
                i++;
                j++;
            }
        }
return 0;
}