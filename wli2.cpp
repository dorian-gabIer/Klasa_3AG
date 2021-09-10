#include <bits/stdc++.h>
using namespace std;
string dec2bin(int n)
{
    string res;
    while(1)
    {
        if(n == 0) 
        {
            reverse(res.begin(), res.end());
            return res;
        }
        if(n%2 == 0) res += "0", n /= 2;
        else res += "1", n-= 1, n /= 2;
    }
}
int main()
{
    int c = 0, n;
    while(cin >> n)
    {
        string b = dec2bin(n);
        string rb = b;
        reverse(rb.begin(), rb.end());
        if(b == rb) c++;
        else
        {
            string tmp = b;
            for(int i = 0; i < b.size(); i++)
            {
                tmp = '0' + tmp;
                string tmp2 = tmp;
                reverse(tmp2.begin(), tmp2.end());
                if(tmp == tmp2)
                {
                    c++; 
                    break;
                }
            }
        }
    }
    cout << c;
    return 0;
}
