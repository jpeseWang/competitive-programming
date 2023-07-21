
#include <iostream>
using namespace std;

int main()
{
    int n, res(0), arr[100001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            res++;
        }
    }
    cout << res;

    return 0;
}
