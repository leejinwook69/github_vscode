#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int p, c;
    int win = 0;
    int draw = 0;
    srand((int)time(NULL));
    while(1)
    {
        printf("rock = 1, paper = 2, sissor = 3 ... input : ");
        scanf("%d", &p);
        c = rand()%3+1;
        if(c == 3)
        {
            printf("you lose\n");
            printf("your record, win : %d, draw : %d", win, draw);
            break;
        }else if(c == 1)
        {
            printf("you win\n");
            win++;
        }else if(c == 2)
        {
            printf("you draw\n");
            draw++;
        }


    }
    return 0;
}