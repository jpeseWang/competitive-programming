#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int count(0), arr[100];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}