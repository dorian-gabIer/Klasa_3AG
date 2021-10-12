#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, cO = 0;
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++) cin >> c[i];
    cin >> k;
    int d[k];
    for(int i = 0; i < k; i++) cin >> d[i];
    sort(c, c+n);
    sort(d, d+k);
    for(int i = 0; i < n; i++)
    {
        if(c[i] != -1)
        {
            for(int j = 0; j < k; j++)
            {
                if(d[j] != -1)
                {
                    if(abs(c[i] - d[j]) <= 1)
                    {
                        c[i] = -1, d[j] = -1, cO++;
                    }
                }
            }
        }
    }
    cout << cO;
    return 0;
}
