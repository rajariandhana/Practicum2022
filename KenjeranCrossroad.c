#include <stdio.h>

int main()
{
    int m,n,t;
    scanf("%d %d %d", &m,&n,&t);
    int totalCarsInLane = m+1+n;
    int yourCarPlusFrontCars = m+1;
    //printf("%d %d %d", m,n,t);

    int red,yellow,green,timeForCarPass;
    red=20;
    yellow=5;
    green=60;
    timeForCarPass=5;
    int RY=red+yellow;
    int RYG=RY+green;

    int amountOfFullCycle=(t/RYG);
    int timeLeftFromFullCycle=(t%RYG);
    //printf("amountOfFullCycle %d\n", amountOfFullCycle);
    //printf("timeLeftFromFullCycle %d\n", timeLeftFromFullCycle);

    int carsPassedFromFullCycle = ((amountOfFullCycle*green)/timeForCarPass);
    int carsLeftFromFullCycle = (m-carsPassedFromFullCycle);
    //printf("carsPassedFromFullCycle %d\n", carsPassedFromFullCycle);
    //printf("carsLeftFromFullCycle %d\n", carsLeftFromFullCycle);

    int timeRemaining = timeLeftFromFullCycle-RY;
    int carsPassed = timeRemaining/timeForCarPass;
    //printf("timeRemaining %d\n", timeRemaining);
    //printf("carsPassed %d\n", carsPassed);

    int totalCarsPassed = carsPassedFromFullCycle+carsPassed;
    int carsLeft = totalCarsInLane-totalCarsPassed;
    //printf("totalCarsPassed %d\n", totalCarsPassed);
    //printf("carsLeft %d\n", carsLeft);

    //printf("%d\n", carsLeft);

    //printf("\n");
    if (carsLeft<0)
    {
        printf("YES! 0");
    }
    else if (totalCarsPassed>=yourCarPlusFrontCars)
    {
        printf("YES! %d", carsLeft);
    }
    else
    {
        printf("NO! %d", carsLeft);
    }
}