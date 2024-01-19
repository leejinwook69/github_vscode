#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//모든 단어를 저장할 배열, row는 알파벳 갯수, col은 해당 알파벳 갯수로 구성된 단어들
string arr[51][20000];

//pivot배열로 각 row 별 몇 개의 단어가 들어가 있는지 확인
int pivot[51];

int main(void)
{

    int n;
    string word;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> word;
        //단어가 입력되면, 먼저 알파벳 갯수를 세어 해당하는 arr 배열에서의 row를 배정하고, pivot 배열을 이용해서 몇 번째 col로 입력되어야 하는지 결정된다.
        //현재는 사전순은 고려하지 않고 입력된 순서로 자리를 할당해줌
        arr[word.length()][pivot[word.length()]++] = word;
    }

    for (int i = 1; i < 51; i++)
    {
        //col이 존재하는 row를 선택해서 수행
        if(pivot[i] != 0)
        {
            // 해당 row의 col 갯수만큼 정렬함
            sort(arr[i], arr[i] + pivot[i]);

            for (int j = 0; j < pivot[i]; j++)
            {
                //중복된 원소는 출력하지 않는다.
                if(j >= 1)
                {
                    if (arr[i][j] == arr[i][j-1])
                        continue;
                }

                cout << arr[i][j] << endl;
            }
        }
    }

}