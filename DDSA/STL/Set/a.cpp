#include <bits/stdc++.h>
#include <set>
#include <iostream>
using namespace std;
int main()
{
    set<int> se;
    se.insert(2);
    se.insert(3);

    se.insert(9);
    se.insert(5);
    se.insert(10);
    for (auto it = se.begin(); it != se.end(); it++)
    {
        cout << *it << " ";
    }
}