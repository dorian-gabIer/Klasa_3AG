#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d, e;
    int co = 0;
    vector <vector<string>> V (1000);
    while(cin >> a >> b >> c >> d >> e)
    {
        if(a.size() == b.size() && b.size() == c.size() && c.size() == d.size() && d.size() == e.size())
        {
            V[co].push_back(a);
            V[co].push_back(b);
            V[co].push_back(c);
            V[co].push_back(d);
            V[co].push_back(e);
            co++;
        }
    }
    cout << co << '\n';
    for(auto elem : V)
    {
        for(auto x : elem) cout << x << ' ';
        cout << '\n';
    }
}
