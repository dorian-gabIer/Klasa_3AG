#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pieczec[1005][1005], org[1005][1005], t, n, m, a, b;
    char tmp;
    cin >> t;
    for(int k = 0; k < t; k++)
    {
        for(int c = 0; c < 1000; c++) for(int d = 0; d < 1000; d++) pieczec[c][d] = 0, org[c][d] = 0;
        vector <int> kordyx, kordyy;
        cin >> n >> m >> a >> b;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> tmp;
                if(tmp == 'x') org[i][j] = 1;
            }
        }
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                cin >> tmp;
                if(tmp == 'x') pieczec[i][j] = 1;
            }
        }
        int pomx = -1, pomy = -1;
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                if(pieczec[i][j] == 1 && pomx == -1) 
                {
                    pomx = i, pomy = j;
                    break;
                }
            }
        }
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                int x, y;
                x = i - pomx, y = j - pomy;
                if(pieczec[i][j])
                { 
                    kordyx.push_back(x);
                    kordyy.push_back(y);
                }
            }
        }
        int ok = true;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(org[i][j])
                {
                    org[i][j] = 0;
                    for(int p = 1; p < kordyx.size(); p++)
                    {
                        int helpx = kordyx[p], helpy = kordyy[p];
                        if(i + helpx < 0 || j + helpy < 0 || i + helpx > n || j + helpy > m) ok = 0;
                        if(org[i + helpx][j + helpy] == 1) org[i + helpx][j + helpy] = 0;
                        else ok = 0;
                    }
                }
            }
        }
        if(ok) cout << "TAK\n";
        else if (!ok) cout << "NIE\n";
    }
    return 0;
}
