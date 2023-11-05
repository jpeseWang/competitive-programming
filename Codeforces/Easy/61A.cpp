#include <iostream>
using namespace std;

int main()
{
    string n, s, res;
    cin >> n >> s;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == s[i])
        {
            res += '0';
        }
        else
        {
            res += '1';
        }
    }
    cout << res;
    return 0;
}
