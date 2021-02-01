#include <stdio.h>
int main()
{
    unsigned short int n,m,i,x=0,y=0;
    unsigned int t;
    char f;
    scanf("%hu %hu %u %c",&n,&m,&t,&f);
    if(f=='L')
    {
        for(i=1;i<t;i++)
        {

            x=x+n;
            if(x>t)
            {
                f='L';
                break;
            }
            x=x+m;
            if(x>t)
            {
                f='R';
                break;
            }

        }
    }
    else if(f=='R')
    {
        for(i=1;i<t;i++)
        {

            x=x+m;
            if(x>t)
            {
                f='R';
                break;
            }
            x=x+n;
            if(x>t)
            {
                f='L';
                break;
            }

        }
    }
    printf("%c",f);
    return 0;
}
