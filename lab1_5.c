//6320501596
#include <stdio.h>
int main ()
{
    int max=0,min,n,i,j;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
        else if(max<a[i])
        {
            max=a[i];
            break;
        }
    }
    printf("%d %d",i+1,max);
    return 0;
}
