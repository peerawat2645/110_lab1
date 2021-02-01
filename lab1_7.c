#include <stdio.h>
int main()
{
    int hour,min,x;
    float time;
    scanf("%f",&time);
    hour=(int)time;
    min=(time-hour)*100;
    if (hour >= 12)
    {
        x = 1;
        if(hour==24)
        {
            x=0;
            hour=0;
        }
        if (hour > 12)
            hour -= 12;
    }
    else
        x = 0;
    if (x == 0)
        printf("%d:%02d a.m.",hour,min);
    else
        printf("%d:%02d p.m.",hour,min);
    return 0;
}
