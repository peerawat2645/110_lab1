#include <stdio.h>

int main(void)
{
    int morning, hour, min;

    scanf("%02d%02d", &hour, &min);

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
        printf("%02d:%02d a.m.", hour, min);
    }
    else
    {
        printf("%02d:%02d p.m.", hour, min);
    }

    return 0;
}
