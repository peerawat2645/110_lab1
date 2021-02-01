//6320501596
#include <stdio.h>
int main ()
{
    int n,i,j,max=0,x;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            x=i+1;
            break;
        }
    }
    printf("%d %d",x,a[x-1]);
    return 0;
}
