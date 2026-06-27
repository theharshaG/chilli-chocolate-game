#include<stdio.h>

int main()
{

    printf("===== Chilli Chocolate Game =====\n");
    printf("Instructions:\n");

    printf("1. There are total 15 chocolates 1 chilli.\n");
    printf("2. Two players play alternately.\n");
    printf("3. Each player can take only 1 to 3 chocolates in one turn.\n");
    printf("4. Do not take more chocolates than remaining.\n");
    printf("5. If invalid input is entered, turn repeats.\n");
    printf("6. The player lost and take chilli who miss the last chocolates.\n\n");

    
    int player;
    int chock = 15;

    while(chock > 0)
    {

        while(1)
        {
            printf("\nPlayer 1 (1-3): ");
            scanf("%d",&player);

            if(player < 1 || player > 3)
            {
                printf("Enter only [1-3]\n");
                continue;
            }

            if(player > chock)
            {
                printf("Only %d chocolates remaining\n", chock);
                continue;
            }

            break;
        }

        chock -= player;

        if(chock == 0)
        {
            printf("\nPlayer 2 gets chilli [LOST]\n");
            break;
        }

        printf("Remaining chocolates: %d\n", chock);

        while(1)
        {
            printf("\nPlayer 2 (1-3): ");
            scanf("%d",&player);

            if(player < 1 || player > 3)
            {
                printf("Enter only [1-3]\n");
                continue;
            }

            if(player > chock)
            {
                printf("Only %d chocolates remaining\n", chock);
                continue;
            }

            break;
        }

        chock -= player;

        if(chock == 0)
        {
            printf("\nPlayer 1 gets chilli [LOST]\n");
            break;
        }

        printf("Remaining chocolates: %d\n", chock);
    }
    return 0;
}
