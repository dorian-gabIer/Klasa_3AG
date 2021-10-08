#include <bits/stdc++.h>
using namespace std;
string dec2all(int x, int s)
{
    int i = 0, temp;
    int numbs[15000];
    string res;
    while(x != 0)
    {
        temp = x % s;
        x /= s;
        numbs[i] = temp;
        i++;
        temp = 0;
    }
    for(int z = i - 1; z >= 0; z--) res += to_string(numbs[z]);
    return res;
}
int sumacyfr(int n)
{
    int s = 0;
    while(n != 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    int n, tmp, maxi = -1;
    string x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        for(int j = 2; i <= 9; i++)
        {
            int s = sumacyfr(stoi(dec2all(tmp, j)));
            if(maxi < s)
            {
                maxi = s;
                x = dec2all(tmp, j);
            }
        }
        cout << maxi << ' ' << x[2];
        maxi = -1;
    }
    return 0;
}
