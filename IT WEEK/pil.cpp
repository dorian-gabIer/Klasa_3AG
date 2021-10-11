#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    if(str.size()% 2 == 0) str.append(".");
    for(int i = 0; i < str.size(); i++)
    {
        if(i == 2 || (i-2)%4 == 0) cout << str[i];
        else cout << "-";
    }
    cout << '\n';
    for(int i = 0; i < str.size(); i++)
    {
        if(i == 1 || i%2 != 0) cout << str[i];
        else cout << "-";
    }
    cout << '\n';
    for(int i = 0; i < str.size(); i++)
    {
        if(i == 0 || i%4 == 0) cout << str[i];
        else cout << "-";
    }
    return 0;
}
