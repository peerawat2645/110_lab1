#include <stdio.h>
int main()
{
    int hour,min,morning;
    float time;
    scanf("%f",&time);
    hour=(int)time;
    min=(time-hour)*100;
     if (hour > 23 || min > 59)
    {
        return 1;
    }
    if (hour >= 12)
    {
        morning = 1;
        if (hour > 12)
        {
            hour -= 12;
        }
    }
    else
    {
        morning = 0;
    }
    if (morning == 0)
    {
        printf("%d:%02d a.m.", hour, min);
    }
    else
    {
        printf("%d:%02d p.m.", hour, min);
    }
    return 0;
}
