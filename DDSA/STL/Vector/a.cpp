#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v(3, 100);

    vector<int>::iterator it = v.begin();
    cout << *it;
}