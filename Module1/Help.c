#include <stdio.h>

int main()
{
    int date, month, year;
    scanf("%d %d %d", &date, &month, &year);

    if(year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
    {
        printf("it is a leap year.\n");
        return 0;
    }

    if(date < 1 || date > 31 || month < 1 || month > 12)
    {
        printf("invalid date or month!!!\n");
    }
    else if (month==2 && date>28)
    {
        printf("invalid date or month!!!\n");
    }
    else if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && date==30)
    {
        printf("invalid date or month!!!\n");
    }
    else if((month==4 || month==6 || month==9 || month==11) && date==31)
    {
        printf("invalid date or month!!!\n");
    }
    else
    {
        int totalDays = 0;
        //daysUntil(certain month)
        int tilJan = 0;
        int tilFeb = 31;
        int tilMar = tilFeb +28;
        int tilApr = tilMar +31;
        int tilMay = tilApr + 30;
        int tilJune = tilMay + 31;
        int tilJuly = tilJune + 30;
        int tilAug = tilJuly + 31;
        int tilSep = tilAug + 31;
        int tilOct = tilSep + 30;
        int tilNov = tilOct + 31;
        int tilDec = tilNov + 30;

        //totalDays
        if(month==1)
        {totalDays = (tilJan+date);}

        else if(month==2)
        {totalDays = (tilFeb+date);}

        else if(month==3)
        {totalDays = (tilMar+date);}

        else if(month==4)
        {totalDays = (tilApr+date);}

        else if(month==5)
        {totalDays = (tilMay+date);}

        else if(month==6)
        {totalDays = (tilJune+date);}

        else if(month==7)
        {totalDays = (tilJuly+date);}

        else if(month==8)
        {totalDays = (tilAug+date);}

        else if(month==9)
        {totalDays = (tilSep+date);}

        else if(month==10)
        {totalDays = (tilOct+date);}

        else if(month==11)
        {totalDays = (tilNov+date);}

        else if(month==12)
        {totalDays = (tilDec+date);}

        printf("Day number: %d\n", totalDays);
        return 0;
    }
}