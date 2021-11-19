#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int player[3];
    int computer[3];
    int strike = 0;
    int ball = 0;
    int trial = 0;
    for(int i = 0; i<3; i++)
    {
        computer[i] = rand()%9;
        for(int k = 0; k<i; k++)
        {
            if(computer[k] == computer[i])
            {
                i--;
                continue;
            }
        }
    }
    srand((int)time(NULL));
    while(1)
    {
        trial++;
        strike = 0;
        ball = 0;

        printf("select 3 numbers : ");
        scanf("%d %d %d", &player[0], &player[1], &player[2]);

        
        for(int i = 0; i<3; i++)
        {
            for(int k = 0; k < 3; k++)
            {
                if(player[i] == computer[k])
                {
                    if(i == k)
                    {
                        strike++;
                    }else
                    {
                        ball++;
                    }
                }
            }
        }
        printf("trial %d : %d strike, %d ball\n", trial, strike, ball);

        if(strike == 3)
        {
            printf("GAME OVER!\n");
            break;
        }
    }
}