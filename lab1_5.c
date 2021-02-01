#include <stdio.h>
int main ()
{
    int n,i,max,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            max=a[i];
        else if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(max==a[i])
        {
            x=i+1;
            break;
        }
    }
    printf("%d %d",x,max);
    return 0;
}
