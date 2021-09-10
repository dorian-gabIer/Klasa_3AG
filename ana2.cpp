#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d, e;
    int co = 0;
    vector <string> V (1000);
    while(cin >> a >> b >> c >> d >> e)
    {
        string ta = a, tb = b, tc = c, td = d, te = e;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        sort(e.begin(), e.end());
        if(a == b && b == c && c == d && d == e)
        {
            V[co] = (ta+' '+tb+' '+tc+' '+td+' '+te);
            co++;
        }
    }
    cout << co << '\n';
    for(auto elem : V)
    {
        cout << elem;
        cout << '\n';
    }
}
