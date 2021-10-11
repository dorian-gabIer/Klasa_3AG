#include <bits/stdc++.h>
using namespace std;
string sumakwcyfr(string n)
{
    int s = 0;
    for(char x : n)
    {
        int tmp = x - '0';
        s += (tmp*tmp);
    }
    return to_string(s);
}
int main()
{
    string n;
    cin >> n;
    cout << n << '\n';
    while(1)
    {
        n = sumakwcyfr(n);
        cout << n << '\n';
        if(n == "1" || n == "4") break;
    }
    return 0;
}
