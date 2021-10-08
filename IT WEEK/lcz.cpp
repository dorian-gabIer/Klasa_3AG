#include <bits/stdc++.h>
using namespace std;
string dec2all(int x, int s)
{
    int i = 0, temp;
    vector <int> numbs(100000);
    string res;
    while(x != 0)
    {
        temp = x % s;
        x /= s;
        numbs[i] = temp;
        i++;
        temp = 0;
    }
    for(int z = i - 1; z >= 0; z--)
    {
        if(numbs[z] == 10) res += "A";
        else if(numbs[z] == 11) res += "B";
        else if(numbs[z] == 12) res += "C";
        else if(numbs[z] == 13) res += "D";
        else if(numbs[z] == 14) res += "E";
        else if(numbs[z] == 15) res += "F";
        else res += to_string(numbs[z]);
    }
    return res;
}
int sumacyfr(string n)
{
    int s = 0;
    for(char x : n) 
    {
        int tmp = x - '0';
        s += tmp;
    }
    return s;
}
int main()
{
    int n, tmp;
    string x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        int maxi = -1, baza;
        string x;
        for(int j = 2; j <= 9; j++)
        {
            int s = sumacyfr(dec2all(tmp, j));
            if(maxi <= s)
            {
                maxi = s;
                baza = j;
                x = dec2all(tmp, j);
            }
        }
        cout << baza << ' ' << x[2] << endl;
    }
    return 0;
}
