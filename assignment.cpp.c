#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[100];
    int n;
    printf("enter number of socks in array \n");
    scanf("%d",&n);
    int j=0;
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    int i=0,m=0;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[m]==arr[m+1])
        {
            count++;
            m=i+2;
        }
        else
        {
            m=i+1;
        }
    }
    
    printf("%d",count);
}
