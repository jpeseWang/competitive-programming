
#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for (int i = 1; i <= t; i++){
        int n; cin >> n;
        int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int count(0);
        for (int i = 0; i < 10; i++){
            count += n/a[i];
            n %= a[i];
        }
    cout << "So tien la: " << count << endl;
    }
    return 0;
}
