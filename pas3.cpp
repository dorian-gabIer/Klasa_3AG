#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a, b;
    while(cin >> a >> b)
    {
        int maxa = 0, maxb = 0;
        if(a.find(b) != string::npos) cout << a << '\n';
        else
        {
            string res1, res2;
            int posa = 0, posb = 0;
            for(int i = 1; i < b.size(); i++)
            {
                if(a.substr(0, i) != b.substr(b.size()-i)) continue;
                maxa = i;
                posa = b.size()-maxa;
            }
            for(int i = 1; i < b.size(); i++)
            {
                if(b.substr(0, i) != a.substr(a.size()-i)) continue;
                maxb = i;
                posb = i;
            }
            if(maxa > maxb) cout << b.substr(0, posa) << a << '\n';
            else if(maxb >= maxa) cout << a << b.substr(posb) << '\n';
            else cout << a << b << '\n';
        }
    }
}
