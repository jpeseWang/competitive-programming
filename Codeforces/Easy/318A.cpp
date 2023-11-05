
#include <iostream>

using namespace std;

int main()
{   long long n, s;
    cin >> n >> s;
    
    if (s <= (n+1) / 2){
        cout << s * 2 - 1;
    }
    else {
        cout << (s - (n + 1) / 2)*2;
    }


    return 0;
}
