#include <iostream>
// pair<datatype 1, datatype 2> v;
// make_pair(a, b); --> C++11 >> no more
// Get values: v.first, v.second
using namespace std;

int main()
{
    cout << "Pair implement\n";
    pair<int, int> v = make_pair(100, 200);
    pair<int, int> v2 = {100, 200};
    cout << v.first << " " << v.second << endl;

    // For 3 params++
    tuple<int, int, int> t{1, 2, 3};
    cout << get<0>(t) << endl;

    return 0;
}
