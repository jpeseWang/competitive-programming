#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int vc;
        cin >> vc;
        v.push_back(vc);
    }
    vector<int>::iterator it = v.begin();
    v.insert(v.begin() + 2, 711);
    for (int x : v)
    {
        cout << x << " ";
    }
};