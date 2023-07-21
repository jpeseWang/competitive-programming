#include <iostream>
using namespace std;

int main()
{
    int n, p, index[100001];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        index[p] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << index[i] << " ";
    }
    return 0;
}
