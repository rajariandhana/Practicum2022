#include <stdio.h>

int main()
{
    int wakeHH, wakeMM;
    int classHH, classMM;
    int tripTime, minSleepTime;
    scanf("%d %d", &wakeHH, &wakeMM);
    scanf("%d %d", &classHH, &classMM);
    scanf("%d %d", &tripTime, &minSleepTime);

    int wakeTotalMin = ((wakeHH*60)+wakeMM);
    int classTotalMin = ((classHH*60)+classMM);
    int spareMin = (classTotalMin-wakeTotalMin);

    int totalWantSleep = (tripTime+minSleepTime);
    int goOrSleep = (spareMin-totalWantSleep);
    int timeForSleep = (spareMin-tripTime);
    /*
    printf("wakeTotalMin%d\n", wakeTotalMin); 
    printf("classTotalMin%d\n", classTotalMin); 
    printf("spareMin%d\n", spareMin);
    printf("totalWantsSleep%d\n", totalWantSleep);
    printf("goOrSleep%d\n", goOrSleep);
    printf("timeForSleep%d\n", timeForSleep);
    */

    if (spareMin <= 0)
    {
        printf("Sleepyhead you already late smh");
        return 0;
    }
    else if (goOrSleep < 0)
    {
        printf("Don't sleep again or you'll be late, Zoro");
        return 0;
    }
    else
    {
        printf("Zoro can sleep for another %d minutes :D", timeForSleep);
    }
}