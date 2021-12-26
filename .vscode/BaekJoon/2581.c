#include <stdio.h>

int main(void)
{
    int min, max, div;
    int found = 0;
    int sum = 0;

    scanf("%d %d", &min, &max);

    for (int i = min; i <= max; i++)
    {
        div = 2;
        //2는 소수로 취급하고 건너뜀.
        if (i == 2)
        {
            //found의 초기값은 0이고 첫 번째로 찾은 소수를 대입한다.
            if (found == 0)
            {
                found = i;
            }
            sum += i;
            continue;
        }

        //2 초과에서는 2부터 i까지 1씩 피젯수를 더하며 나누어 본다.
        for (; div < i; div++)
        {
            //나누어지면 종료
            if (i % div == 0)
            {
                break;
            }

        }

        //div가 라면 나누어지는 수가 없는 것. (i/2까지 해봐도 될 것 같으나 홀짝 계산등이 귀찮으므로 타임아웃시 시도해볼것)
        if (div == i)
        {
            if (found == 0)
            {
                found = i;
            }
            sum += i;
        }
    }

    if (found != 0)
    {
        printf("%d\n%d\n", sum, found);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}