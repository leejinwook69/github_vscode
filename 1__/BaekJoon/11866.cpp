#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>

using namespace std;

struct Circle
{
    int n = 0;
    Circle *next;
    Circle *privious;
};

Circle *delCircle(Circle *cir, vector<int>* result)
{
    Circle *nextPtr;
    Circle *privPtr;

    (*result).emplace_back((*cir).n);

    nextPtr = (*cir).next;
    privPtr = (*cir).privious;

    (*nextPtr).privious = privPtr;
    (*privPtr).next = nextPtr;

    return nextPtr;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    Circle *pivot;
    ostringstream oss;

    cin >> n >> k;

    Circle *arr = new Circle[n + 1];
    vector<int> result;

    for (int i = 1; i <= n; i++)
    {
        arr[i].n = i;
        arr[i].next = &arr[i + 1];
        arr[i].privious = &arr[i - 1];
    }
    arr[1].privious = &arr[n];
    arr[n].next = &arr[1];

    pivot = &arr[1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = k - 1; j > 0; j--)
        {
            pivot = (*pivot).next;
        }
        pivot = delCircle(pivot, &result);
    }

    copy(result.begin(), result.end() - 1, ostream_iterator<int>(oss, ", "));
    oss << result.back();

    cout << '<' << oss.str() << '>' << "\n";
}