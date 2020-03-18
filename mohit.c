#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[100];
    int n,i=0,j=0,count=0;
    printf("enter number of socks in array \n");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            i=i+1;
        }
        else
        {
            i;
        }
    }
    
    printf("%d",count);
}
