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
        string tmp1, tmp2;
        bool is = false;
        int maxa = 0, maxb = 0;
        if(a.find(b) != string::npos) cout << a << '\n';
        else
        {
            for(int i = 0; i < a.size(); i++)
            {
                for(int j = b.size()-1; j >= 0; j--)
                {
                    tmp1 += a[i], tmp2 += b[j];
                    if(tmp1 == tmp2 && !is) maxa++;
                    else {
                        is = true;
                        break;
                    }
                }
                if(is) break;
            }
            tmp1 = "", tmp2 = "", is = false;
            for(int i = a.size()-1; i >= 0; i--)
            {
                for(int j = 0; j < b.size(); j++)
                {
                    tmp1 += a[i], tmp2 += b[j];
                    if(tmp1 == tmp2 && !is) maxb++;
                    else {
                        is = true;
                        break;
                    }
                }
                if(is) break;
            }
            if(maxa < maxb) cout << b.substr(0, b.size()-maxa) << a << '\n';
            else if(maxb < maxa) cout << a << b.substr(maxb-1, b.size()-maxb) << '\n';
            else if(maxb != 0) cout << a << b.substr(maxb-1, b.size()-maxb) << '\n';
            else cout << a << b << '\n'
        }
    }
}
