#include <stdio.h>
int main()
{
    unsigned int n,m,i,k=0;
    unsigned long int t;
    char f;
    scanf("%u %u %li %c",&n,&m,&t,&f);
    if(f=='L')
    {
        for(i=1; i<t; i++)
        {

            k=k+n;
            if(k>t)
            {
                f='L';
                break;
            }
            k=k+m;
            if(k>t)
            {
                f='R';
                break;
            }

        }
    }
    else if(f=='R')
    {
        for(i=1; i<t; i++)
        {

            k=k+m;
            if(k>t)
            {
                f='R';
                break;
            }
            k=k+n;
            if(k>t)
            {
                f='L';
                break;
            }
        }
    }
    printf("%c",f);
    return 0;
}
