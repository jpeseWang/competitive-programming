
#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    
    string a, b;
    while (n--){
        cin >> a >> b;
        int c1=0, c2=0;
    
    for (int i =0, j =0; i<a.length(), j < b.length(); i++, j++ ){
        if (a[i] == 'X')
            c1++;
        if (b[i] == 'X')
            c2++;
    }
    if (a[a.length()-1]=='S' && b[b.length()-1]=='M')
        cout <<"<\n";
    else if (a[a.length()-1]=='S' && b[b.length()-1]=='L')
        cout <<"<\n";
    else if (a[a.length()-1]=='M' && b[b.length()-1]=='L')
        cout <<"<\n";
    else if (a[a.length()-1]=='L' && b[b.length()-1]=='S')
        cout <<">\n";
    else if (a[a.length()-1]=='L' && b[b.length()-1]=='M')
        cout <<">\n";
    else if (a[a.length()-1]=='M' && b[b.length()-1]=='S')
        cout <<">\n";
    else{
        if(a[a.length()-1]=='S'){
        if (c1==c2)
            cout << "=\n";
        else if (c1>c2)
            cout <<"<\n";
        else cout <<">\n";
        }
        else{
            if(c1==c2) cout << "=\n";
            else if (c1>c2) cout << ">\n";
            else cout << "<\n";
            
        }
    }
    }
        

    return 0;
}
