#include <stdio.h>
#include <math.h>

int main()
{
    int allCards, card1_index, card2_index;
    scanf("%d", &allCards);
    scanf("%d %d", &card1_index, &card2_index);

    int card1_power, card2_power;
    card1_power = pow(10, card1_index-1);
    card2_power = pow(10, card2_index-1);

    int card1, card2;
    card1 = (allCards / card1_power)%10;
    card2 = (allCards / card2_power)%10;

    // printf("Card 1 : %d\n", card1);
    // printf("Card 2 : %d\n", card2);

    if(card1 == card2)
    {
        printf("Win 100$!\n");
    }
    else if((card1%2==0 && card2%2==0) || (card1%2==1 && card2%2==1))
    {
        printf("Lose!\n");
    }
    else
    {
        printf("Win 50$!\n");
    }
}