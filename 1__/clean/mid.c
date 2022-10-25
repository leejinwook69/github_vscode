#include <stdio.h>
#define N 5
#define INFINITE 999
#define MIN(a, b) a<b ? a: b



    //시간복잡도 n^2가 아니라 n^3 이었네요
    //점 A, B, C, D, E 로 두고,
    //모든 점에서 점 A를 거쳐서 가는 경로를 위에 설정된 초기 가중치 값과 비교 후 min 값으로 설정한 뒤
    //동일한 방법을 B, C, D, E를 거쳐서 가는 경로로도 반복하여 구한다


void FWAlgo(int arr[4][5], int pivot)
{
    int var;
    int temp;

    if(pivot > 5 || pivot < 0)
        return;

    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N; j++)
        {
            var = arr[i][pivot] + arr[pivot][j];
            
            if(arr[i][j] > var)
            {
                arr[i][j] = var;
            }
        }
    }
    
    
     
}

int main()
{
    int DP[N-1][N] = 
    {
        {INFINITE, 0, 1, INFINITE, 4},
        {1, 3, 0, 1, 2},
        {-2, INFINITE, INFINITE, 0, 2},
        {INFINITE, -3, 3, 1, 0}
    };




    for(int i = 0; i < N; i++)
    {
        FWAlgo(DP, i);
    }



    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(DP[i][j] == 999)
                printf("min %d->%d : INFINITE \n", i+1, j+1);
            else
                printf("min %d->%d : %d \n", i+1, j+1, DP[i][j]);
        }

    }

    //제출시각 : 2022 10 20  /  14 : 55
}